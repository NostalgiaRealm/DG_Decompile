/*
 * FUN_180017ecc at 180017ecc
 * undefined8 __fastcall FUN_180017ecc(longlong param_1, uint param_2, longlong param_3, RECT * param_4)
 * Address ranges: 180017ecc-180018026
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180017ecc(longlong param_1,uint param_2,longlong param_3,RECT *param_4)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  BOOL BVar4;
  LPRECT lprcDst;
  uint uVar5;
  undefined8 uVar6;
  RECT *lprcSrc2;
  byte *pbVar7;
  RECT local_58;
  tagRECT local_48;
  
  pbVar7 = (byte *)(*(longlong *)(param_1 + 0x18) + -0x59c0);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    pbVar7 = &DAT_00000e78;
  }
  if (((*pbVar7 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar3 = false;
  }
  else {
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    bVar3 = true;
    if (BVar4 == 0) {
      FUN_1800044dc(0);
      bVar3 = true;
    }
  }
  uVar5 = 1;
  local_58.right = *(LONG *)(param_1 + 0x68);
  local_58.bottom = *(LONG *)(param_1 + 0x6c);
  local_58.left = 0;
  local_58.top = 0;
  lprcSrc2 = &local_58;
  if (param_4 != (RECT *)0x0) {
    uVar6 = 0x8876086c;
    BVar4 = IntersectRect(&local_48,param_4,&local_58);
    if ((BVar4 == 0) || (BVar4 = EqualRect(param_4,&local_48), lprcSrc2 = param_4, BVar4 == 0))
    goto LAB_180017ffb;
  }
  lprcDst = (LPRECT)((ulonglong)param_2 * 0x10 + param_3);
  UnionRect(lprcDst,lprcDst,lprcSrc2);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x7c) == 1) {
    if (1 < *(ushort *)(param_1 + 0x3c)) {
      do {
        lVar2 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + 0x40) + (ulonglong)(param_2 * 0x10 + uVar5) * 8) + 8);
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          puVar1 = (uint *)(lVar2 + 0x48);
          *puVar1 = *puVar1 | 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + 0x3c));
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(param_2 * 0x10) * 8);
    if (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x28) != 0) {
      puVar1 = (uint *)(*(longlong *)(lVar2 + 8) + 0x48);
      *puVar1 = *puVar1 | 1;
      FUN_180007f2c(*(longlong *)(lVar2 + 0x28),lVar2);
    }
  }
LAB_180017ffb:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar6;
}

