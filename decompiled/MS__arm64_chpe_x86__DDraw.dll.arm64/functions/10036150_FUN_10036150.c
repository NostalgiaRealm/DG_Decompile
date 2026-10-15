/*
 * FUN_10036150 at 10036150
 * undefined FUN_10036150(void)
 * Address ranges: 10036150-1003625b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10036150(int param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  cVar1 = (&DAT_100be33a)[*(int *)(param_1 + 0x10c) * 0x228];
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0xec);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,&local_50,*puVar4);
    param_2[1] = uStack_48;
    *param_2 = local_50;
    param_2[3] = uStack_38;
    param_2[2] = local_40;
    iVar2 = *(int *)(param_1 + 0x10c);
    (*(code *)PTR_FUN_100ba2b8)
              (param_2 + 4,0,0,*(undefined4 *)(&DAT_100be2cc + iVar2 * 0x45),
               *(undefined4 *)((int)&DAT_100be2cc + iVar2 * 0x228 + 4));
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return cVar1 != '\0';
}

