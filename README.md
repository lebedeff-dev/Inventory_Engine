# 03 - Inventory Engine

Motor de processamento em C que simula a gestao de estoque de uma fabrica
(Supply Chain / ERP). Compara a materia-prima disponivel com a exigida para
manufaturar um veiculo e gera um relatorio de deficit de inventario.

## Estrutura

```
src/
└── inventory.c    # motor de estoque e relatorio de deficit
```

## Como compilar e executar

A partir da pasta do projeto:

```bash
gcc src/inventory.c -o inventory
./inventory
```

No Windows (PowerShell), o executavel e `inventory.exe`:

```powershell
gcc src/inventory.c -o inventory.exe
./inventory.exe
```
