/*
 * FUN_180078508 at 180078508
 * undefined1 __fastcall FUN_180078508(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180078508-18007868f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180078508(uint *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined8 **ppuVar2;
  LPVOID *ppvVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  LPVOID local_58;
  LPVOID pvStack_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_60 = 1;
  ppuVar2 = (undefined8 **)0x200;
  local_68 = 0x200;
  uVar5 = 0;
  local_78 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
  local_70 = local_78;
  iVar1 = FUN_180074870(ppuVar2,(longlong *)&local_78,param_3);
  puVar4 = local_78;
  if (iVar1 != 0) {
    uVar7 = 0;
    if (*(int *)(param_3 + 0x158) != 0) {
      do {
        ppuVar2 = &local_78;
        FUN_1800eddec((longlong *)ppuVar2,4,0x400005f,
                      (ulonglong)
                      ((uint)*(byte *)(param_3 + 0x134 +
                                      (ulonglong)*(byte *)(param_3 + 0x146 + uVar7)) << 4 | 0x201002
                      ));
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_3 + 0x158));
    }
    FUN_1800749ac(ppuVar2,(longlong *)&local_78,param_3);
    local_40 = 1;
    local_58 = (LPVOID)0x0;
    pvStack_50 = (LPVOID)0x0;
    local_48 = 0x80;
    local_58 = (LPVOID)thunk_FUN_1800fbccc(0x80);
    lVar8 = param_3;
    pvStack_50 = local_58;
    FUN_180074b3c(param_1,(longlong *)&local_58,(longlong *)0x0,param_3);
    ppvVar3 = &local_58;
    FUN_1800eddec((longlong *)ppvVar3,1,0x100003e,lVar8);
    FUN_18007e170(ppvVar3,(longlong *)&local_78,param_3);
    if ((*(byte *)(param_3 + 0x28) & 8) != 0) {
      ppvVar3 = (LPVOID *)(ulonglong)*(uint *)(param_3 + 0x20);
      FUN_1800ee354(*(uint *)(param_3 + 0x20),(longlong *)&local_78);
    }
    FUN_180074a78(ppvVar3,(longlong *)&local_78,param_3);
    FUN_1800ee0e8((longlong *)&local_78,(longlong *)&local_58,iVar1);
    puVar4 = local_78;
    FUN_1800edd90(param_2,local_78,(longlong)local_70 - (longlong)local_78);
    uVar5 = 1;
    FUN_1800fbcf0(local_58);
  }
  FUN_1800fbcf0(puVar4);
  return uVar5;
}

