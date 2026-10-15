/*
 * FUN_1005f690 at 1005f690
 * undefined FUN_1005f690(void)
 * Address ranges: 1005f690-1005f8eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1005f690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  puVar2 = (undefined4 *)FUN_10083310(0x28);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar2[4] = 0;
    local_3c = 0;
    *(undefined8 *)(puVar2 + 6) = 1;
    puVar2[8] = param_3;
    puVar2[9] = param_4;
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_40 = puVar2[8];
    local_34 = 0;
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar4 = (*extraout_w11)(uVar3,&local_40,&DAT_100a1990,puVar2 + 2);
    if (-1 < iVar4) {
      uVar3 = (*pcVar1)();
      (*extraout_w11_00)(uVar3);
      uVar3 = (*pcVar1)();
      (*extraout_w11_01)(uVar3);
      puVar5 = puVar2 + 9;
      uVar3 = (*pcVar1)();
      (*extraout_w11_02)(uVar3,*puVar5);
      uVar3 = (*pcVar1)();
      iVar4 = (*extraout_w11_03)(uVar3,0,0,&DAT_100a1980,puVar2 + 3);
      if (-1 < iVar4) {
        iVar4 = (*(code *)PTR_FUN_100a8014)(0,0,0,0);
        puVar2[4] = iVar4;
        if (iVar4 != 0) {
          return puVar2;
        }
        uVar3 = (*pcVar1)();
        (*extraout_w11_04)(uVar3);
      }
      uVar3 = (*pcVar1)();
      (*extraout_w11_05)(uVar3);
      puVar2[2] = 0;
    }
    FUN_1005f600(puVar2);
    FUN_100833b0(puVar2,0x28);
  }
  return (undefined4 *)0x0;
}

