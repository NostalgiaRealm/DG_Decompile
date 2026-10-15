/*
 * FUN_1800bd500 at 1800bd500
 * undefined4 __fastcall FUN_1800bd500(longlong param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1800bd500-1800bd64a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bd500(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  lpCriticalSection = DAT_1801123a8;
  uVar4 = 0x8876086c;
  if ((param_3 != (undefined4 *)0x0) && ((param_2 - 2 < 0x16 || (param_2 - 0x100 < 0x100)))) {
    if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      BVar3 = TryEnterCriticalSection(DAT_1801123a8);
      lpCriticalSection = DAT_1801123a8;
      if (BVar3 == 0) {
        FUN_1800044dc(0);
        lpCriticalSection = DAT_1801123a8;
      }
    }
    if (param_2 < 0x18) {
      iVar5 = *(int *)(&DAT_180100ef0 + (longlong)(int)param_2 * 4);
    }
    else {
      iVar5 = param_2 - 0xf6;
    }
    lVar1 = *(longlong *)(param_1 + -0x5a28);
    uVar4 = 0;
    lVar6 = (longlong)iVar5 * 0x40;
    *param_3 = *(undefined4 *)(lVar6 + lVar1);
    param_3[4] = *(undefined4 *)(lVar6 + 4 + lVar1);
    param_3[8] = *(undefined4 *)(lVar6 + 8 + lVar1);
    param_3[0xc] = *(undefined4 *)(lVar6 + 0xc + lVar1);
    param_3[1] = *(undefined4 *)(lVar6 + 0x10 + lVar1);
    param_3[5] = *(undefined4 *)(lVar6 + 0x14 + lVar1);
    param_3[9] = *(undefined4 *)(lVar6 + 0x18 + lVar1);
    param_3[0xd] = *(undefined4 *)(lVar6 + 0x1c + lVar1);
    param_3[2] = *(undefined4 *)(lVar6 + 0x20 + lVar1);
    param_3[6] = *(undefined4 *)(lVar6 + 0x24 + lVar1);
    param_3[10] = *(undefined4 *)(lVar6 + 0x28 + lVar1);
    param_3[0xe] = *(undefined4 *)(lVar6 + 0x2c + lVar1);
    param_3[3] = *(undefined4 *)(lVar6 + 0x30 + lVar1);
    param_3[7] = *(undefined4 *)(lVar6 + 0x34 + lVar1);
    param_3[0xb] = *(undefined4 *)(lVar6 + 0x38 + lVar1);
    param_3[0xf] = *(undefined4 *)(lVar6 + 0x3c + lVar1);
    if (bVar2) {
      LeaveCriticalSection(lpCriticalSection);
      uVar4 = 0;
    }
    else {
      *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
    }
  }
  return uVar4;
}

