/*
 * FUN_100431d0 at 100431d0
 * int __stdcall FUN_100431d0(uint * param_1, byte * param_2, int * param_3)
 * Address ranges: 100431d0-1004335f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100431d0(uint *param_1,byte *param_2,int *param_3)

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
  iVar4 = FUN_100561c2(param_2,&DAT_10057370,0x10);
  if (((((iVar4 == 0) || (iVar4 = FUN_100561c2(pbVar2,&DAT_10057350,0x10), iVar4 == 0)) ||
       (iVar4 = FUN_100561c2(pbVar2,&DAT_10057360,0x10), iVar4 == 0)) ||
      ((iVar4 = FUN_100561c2(pbVar2,&DAT_10057310,0x10), iVar4 == 0 ||
       (iVar4 = FUN_100561c2(pbVar2,&DAT_10057320,0x10), iVar4 == 0)))) ||
     (iVar4 = FUN_100561c2(pbVar2,&DAT_10057350,0x10), iVar4 == 0)) {
    *piVar3 = (int)puVar1;
    FUN_10043360((int)puVar1);
    return (int)param_1;
  }
  param_1 = puVar1 + 0x248;
  iVar4 = FUN_100561c2(pbVar2,&DAT_10057330,0x10);
  if (iVar4 == 0) {
    if (puVar1[0x248] != 0) goto LAB_10043335;
  }
  else {
    param_1 = puVar1 + 0x248;
  }
  iVar4 = FUN_100561c2(pbVar2,&DAT_10057340,0x10);
  if (((((iVar4 != 0) || (*param_1 < 2)) &&
       ((iVar4 = FUN_100561c2(pbVar2,&DAT_10057270,0x10), iVar4 != 0 || (*param_1 < 3)))) &&
      (((iVar4 = FUN_100561c2(pbVar2,&DAT_10057280,0x10), iVar4 != 0 || (*param_1 < 4)) &&
       ((iVar4 = FUN_100561c2(pbVar2,&DAT_100572d0,0x10), iVar4 != 0 || (*param_1 < 5)))))) &&
     ((iVar4 = FUN_100561c2(pbVar2,&DAT_100572e0,0x10), iVar4 != 0 || (*param_1 < 6)))) {
    return -0x7fffbffe;
  }
LAB_10043335:
  param_1 = (uint *)0x0;
  iVar4 = (*(code *)**(undefined4 **)puVar1[0x18e])((undefined4 *)puVar1[0x18e],pbVar2,&param_1);
  if (-1 < iVar4) {
    *piVar3 = (int)puVar1;
  }
  return iVar4;
}

