- ## EmCoin = *Tipos de datos son,Crear Moneda AgregarDueño, EnviarMonedas, TransferirMonedas,getMonedasCliente
- ## Descripcion: *TDA para creacion de una moneda, realizando diferentes operaciones entre dueños de monedas.
- ## Operaciones:
      - EmCoin(nombreMoneda: String, noMonedas: entero, id: entero)
            -requerimientos: noMonedas > 0.
            -efecto: Crea monedas.
      - AgregarDueño(cantidad: entero)
            -requerimientos: cantidad < noMonedas.
            -efecto: agrega nuevo usuario de monedas.       
      - EnviarMonedas(Id, Cantidad: entero)
            -efecto: Envia monedas a una persona.
      - TransferirMonedas(Emisor, Receptor, Cantidad: entero)
            -requerimientos: cantidad > 0
            -efecto: Transferencia de monedas entre dueños.
      - getMonedasCliente(Id: Entero)
            -efecto: saldo de monedas.     