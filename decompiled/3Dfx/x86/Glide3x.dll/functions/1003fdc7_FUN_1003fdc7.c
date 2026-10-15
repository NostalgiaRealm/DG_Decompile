/*
 * FUN_1003fdc7 at 1003fdc7
 * int __stdcall FUN_1003fdc7(uint * param_1, byte * param_2, int * param_3)
 * Address ranges: 1003fdc7-1003ff56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003fdc7(uint *param_1,byte *param_2,int *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_3;
  pbVar2 = param_2;
  puVar1 = param_1;
  *param_3 = 0;
  param_1 = (uint *)0x0;
  iVar4 = FUN_10052db2(param_2,&DAT_10054370,0x10);
  if (((((iVar4 == 0) || (iVar4 = FUN_10052db2(pbVar2,&DAT_10054350,0x10), iVar4 == 0)) ||
       (iVar4 = FUN_10052db2(pbVar2,&DAT_10054360,0x10), iVar4 == 0)) ||
      ((iVar4 = FUN_10052db2(pbVar2,&DAT_10054310,0x10), iVar4 == 0 ||
       (iVar4 = FUN_10052db2(pbVar2,&DAT_10054320,0x10), iVar4 == 0)))) ||
     (iVar4 = FUN_10052db2(pbVar2,&DAT_10054350,0x10), iVar4 == 0)) {
    *piVar3 = (int)puVar1;
    FUN_1003ff57((int)puVar1);
    return (int)param_1;
  }
  param_1 = puVar1 + 0x248;
  iVar4 = FUN_10052db2(pbVar2,&DAT_10054330,0x10);
  if (iVar4 == 0) {
    if (puVar1[0x248] != 0) goto LAB_1003ff2c;
  }
  else {
    param_1 = puVar1 + 0x248;
  }
  iVar4 = FUN_10052db2(pbVar2,&DAT_10054340,0x10);
  if (((((iVar4 != 0) || (*param_1 < 2)) &&
       ((iVar4 = FUN_10052db2(pbVar2,&DAT_10054270,0x10), iVar4 != 0 || (*param_1 < 3)))) &&
      (((iVar4 = FUN_10052db2(pbVar2,&DAT_10054280,0x10), iVar4 != 0 || (*param_1 < 4)) &&
       ((iVar4 = FUN_10052db2(pbVar2,&DAT_100542d0,0x10), iVar4 != 0 || (*param_1 < 5)))))) &&
     ((iVar4 = FUN_10052db2(pbVar2,&DAT_100542e0,0x10), iVar4 != 0 || (*param_1 < 6)))) {
    return -0x7fffbffe;
  }
LAB_1003ff2c:
  param_1 = (uint *)0x0;
  iVar4 = (*(code *)**(undefined4 **)puVar1[0x18e])((undefined4 *)puVar1[0x18e],pbVar2,&param_1);
  if (-1 < iVar4) {
    *piVar3 = (int)puVar1;
  }
  return iVar4;
}

