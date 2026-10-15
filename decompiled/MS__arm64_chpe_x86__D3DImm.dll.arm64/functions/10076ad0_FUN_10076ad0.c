/*
 * FUN_10076ad0 at 10076ad0
 * undefined FUN_10076ad0(void)
 * Address ranges: 10076ad0-10076bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10076ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined4 *)FUN_10081cb0(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_1009d088;
    *(undefined8 *)(puVar2 + 1) = 0;
    *(undefined8 *)(puVar2 + 3) = 0;
    *(undefined8 *)(puVar2 + 5) = 0;
    *(undefined8 *)(puVar2 + 7) = 4;
    puVar2[9] = param_4;
    *(undefined8 *)(puVar2 + 10) = 0;
    iVar3 = (*(code *)PTR_FUN_100a1004)(0,0,0,0);
    piVar1 = puVar2 + 0xb;
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      puVar2[1] = param_1;
      puVar2[2] = param_2;
      puVar2[7] = param_3;
      puVar2[8] = param_5;
      uVar4 = FUN_10071680(param_1,param_2,param_3);
      puVar2[10] = uVar4;
      uVar5 = FUN_10076828(puVar2);
      if ((uVar5 & 1) != 0) {
        return puVar2;
      }
      (*(code *)__hybrid_CompilerIAT)(*piVar1);
      *piVar1 = 0;
    }
    FUN_1001ea20(puVar2);
  }
  return (undefined4 *)0x0;
}

