#include "pch.h"
#include "DataBase.h"

DataBase::DataBase()
{
    this->connectionString = "datasource=localhost; username=root; password=1234; database=sistema_deportivo";
    this->conn = gcnew MySqlConnection(this->connectionString);

}



void DataBase::AbrirConexion()
{
    this->conn->Open();

}

void DataBase::CerrarConexion()
{
    this->conn->Close();
}

DataTable^ DataBase::getReserva()
{
    String^ sql = "select * from reservas";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}

DataTable^ DataBase::getC_deportivo()
{
    String^ sql = "select * from canchas";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}

DataTable^ DataBase::getClientes()
{
    String^ sql = "select * from clientes";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}


void DataBase::insertar(String^ d, String^ f, String^ h, String^ c, String^ p, String^ t)
{
    String^ sql = "insert into reservas(dni_usuario,fecha,horario,id_cancha,Precio,tiempo_reserva) values(" + d + ",'" + f + "','" + h + "'," + c + "," + p + ",'" + t + "')";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    try
    {
        cursor->ExecuteNonQuery();
    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
    }
}

void DataBase::insertar(String^ u, String^ n, String^ p)
{
    String^ sql = "insert into canchas(ubicacion,nivel,precio_hora) values('" + u + "'," + n + "," + p + ")";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    try
    {
        cursor->ExecuteNonQuery();
    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
    }
}


void DataBase::insertar(String^ d, String^ n, String^ c, String^ t)
{
    String^ sql = "insert into clientes values(" + d + ",'" + n + "','" + c + "'," + t + ")";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    try
    {
        cursor->ExecuteNonQuery();
    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
    }
}





void DataBase::modificar(String^ d, String^ f, String^ h, String^ c, String^ p, String^ t, String^ ref)
{
    String^ sql = "update reservas set dni_usuario =" + d + ", fecha ='" + f + "', horario = '" + h + "',id_cancha =" + c + ", Precio=" + p + ", tiempo_reserva='" + t + "' where dni_usuario = " + ref + "";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

    try
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        cursor->ExecuteNonQuery();

    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
    }
}

void DataBase::modificar(String^ u, String^ n, String^ p, String^ ref)
{
    String^ sql = "update canchas set ubicacion ='" + u + "', nivel =" + n + ", precio_hora = " + p + " where ubicacion = '" + ref + "'";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

    try
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        cursor->ExecuteNonQuery();

    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
    }
}


void DataBase::modificar(String^ d, String^ n, String^ c, String^ t, String^ ref)
{
    String^ sql = "update clientes set dni =" + d + ", nombre ='" + n + "', correo='" + c + "', telefono=" + t + " where dni =" + ref + "";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

    try
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        cursor->ExecuteNonQuery();

    }
    catch (Exception^ e)
    {
        using namespace System::Windows::Forms;
        using namespace System::Data;
        using namespace System::Drawing;
        MessageBox::Show(e->Message);
    }
}
