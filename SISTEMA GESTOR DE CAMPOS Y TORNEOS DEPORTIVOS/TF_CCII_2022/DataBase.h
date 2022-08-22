#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class DataBase
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DataBase();
	DataTable^ getReserva();
	DataTable^ getC_deportivo();
	DataTable^ getClientes();
	void AbrirConexion();
	void CerrarConexion();
	void insertar(String^, String^, String^, String^, String^, String^);
	void insertar(String^, String^, String^);
	void insertar(String^, String^, String^, String^);
	void modificar(String^, String^, String^, String^, String^, String^, String^);
	void modificar(String^, String^, String^, String^);
	void modificar(String^, String^, String^, String^, String^);
};

