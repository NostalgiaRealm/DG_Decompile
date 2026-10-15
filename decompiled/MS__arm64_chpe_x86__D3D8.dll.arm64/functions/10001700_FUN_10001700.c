/*
 * FUN_10001700 at 10001700
 * undefined FUN_10001700(void)
 * Address ranges: 10001700-100018af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10001700(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  byte bVar8;
  uint uVar9;
  int local_50 [4];
  
  uVar6 = DAT_1013ceec;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = param_1 + 0x60;
  }
  puVar1 = (undefined4 *)(param_1 + 100);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar5 = (*extraout_w11)(uVar6,&DAT_10129030);
  uVar9 = 0;
  while( true ) {
    if (uVar5 <= uVar9) {
      uVar9 = 0;
      bVar8 = 1;
      while( true ) {
        if (*(uint *)(param_1 + 0x68) <= uVar9) {
          return bVar8;
        }
        uVar6 = (*pcVar3)();
        bVar4 = (*extraout_w11_01)(uVar6,iVar2);
        bVar8 = bVar4 & bVar8;
        if (bVar8 == 0) break;
        uVar9 = uVar9 + 1;
      }
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        uVar6 = (*pcVar3)();
        (*extraout_w11_02)(uVar6,iVar2);
      }
      FUN_100fed00(*puVar1);
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(uint *)(param_1 + 0x68) = 0;
      return 0;
    }
    (*pcVar3)();
    local_50[0] = (*extraout_w11_00)(uVar6,&DAT_10129030,uVar9);
    if ((local_50[0] == 0) || (uVar7 = FUN_10006490(puVar1,local_50), (uVar7 & 1) == 0)) break;
    uVar9 = uVar9 + 1;
  }
  return 0;
}

