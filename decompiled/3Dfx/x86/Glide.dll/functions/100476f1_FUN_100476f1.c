/*
 * FUN_100476f1 at 100476f1
 * undefined4 __stdcall FUN_100476f1(undefined4 * param_1)
 * Address ranges: 100476f1-10047791
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100476f1(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  LPVOID local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puVar2 = param_1;
  puVar4 = (undefined4 *)0x0;
  pvVar3 = (LPVOID)FUN_1004f9d3(param_1[3] * param_1[2]);
  if (pvVar3 != (LPVOID)0x0) {
    local_40 = *puVar2;
    local_3c = puVar2[1];
    local_28 = 0;
    local_38 = 1;
    local_34 = 1;
    local_2c = 1;
    local_24 = 1;
    local_1c = 0;
    local_18 = 0;
    local_c = 0;
    param_1 = (undefined4 *)0x0;
    local_30 = 0x3c;
    local_20 = 8;
    local_10 = 0x100;
    piVar1 = *(int **)(*(int *)(local_8 + 0x10) * 0x1510 + 0x510 + *(int *)(local_8 + 0xc));
    local_14 = pvVar3;
    (**(code **)(*piVar1 + 0x14))(piVar1,&local_40,&local_14,&param_1);
    puVar4 = param_1;
    thunk_FUN_1004f9b6(pvVar3);
  }
  return puVar4;
}

