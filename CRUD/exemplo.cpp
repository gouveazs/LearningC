#include <iostream>
#include <sqlite3.h>
using namespace std;

// função callback usada no SELECT
static int callback(void* data, int argc, char** argv, char** colName) {
    for (int i = 0; i < argc; i++) {
        cout << colName[i] << ": " << (argv[i] ? argv[i] : "NULL") << endl;
    }
    cout << "----------------------" << endl;
    return 0;
}

int main() {
    sqlite3* DB;
    char* errMsg = 0;

    // 1. ABRIR (OU CRIAR) BANCO
    int exit = sqlite3_open("pessoas.db", &DB);

    if (exit) {
        cout << "Erro ao abrir banco: " << sqlite3_errmsg(DB) << endl;
        return 1;
    } else {
        cout << "Banco aberto com sucesso!\n";
    }

    // 2. CRIAR TABELA
    string sql = "CREATE TABLE IF NOT EXISTS pessoas ("
                 "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                 "nome TEXT, "
                 "idade INT);";

    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &errMsg);

    if (exit != SQLITE_OK) {
        cout << "Erro ao criar tabela: " << errMsg << endl;
        sqlite3_free(errMsg);
    }

    // 3. INSERIR DADOS
    sql = "INSERT INTO pessoas (nome, idade) VALUES ('Joao', 20);";

    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &errMsg);

    if (exit != SQLITE_OK) {
        cout << "Erro ao inserir: " << errMsg << endl;
        sqlite3_free(errMsg);
    } else {
        cout << "Registro inserido!\n";
    }

    // 4. CONSULTAR DADOS
    sql = "SELECT * FROM pessoas;";

    exit = sqlite3_exec(DB, sql.c_str(), callback, 0, &errMsg);

    if (exit != SQLITE_OK) {
        cout << "Erro no SELECT: " << errMsg << endl;
        sqlite3_free(errMsg);
    }

    // 5. FECHAR BANCO
    sqlite3_close(DB);

    return 0;
}