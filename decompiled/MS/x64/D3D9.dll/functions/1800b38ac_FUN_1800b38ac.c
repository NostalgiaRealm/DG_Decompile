/*
 * FUN_1800b38ac at 1800b38ac
 * uint __fastcall FUN_1800b38ac(longlong param_1, longlong param_2, tagRECT * param_3, undefined4 param_4)
 * Address ranges: 1800b38ac-1800b3a89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800b38ac(longlong param_1,longlong param_2,tagRECT *param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  tagRECT *ptVar5;
  uint uVar6;
  uint uVar7;
  RECT local_78;
  tagRECT local_68;
  tagRECT local_58;
  
  uVar6 = 0x8876086c;
  if (param_2 != 0) {
    if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      bVar1 = false;
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    }
    else {
      bVar1 = true;
      BVar3 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar3 == 0) {
        FUN_1800044dc(0);
      }
    }
    lVar4 = FUN_180002974(*(int *)(param_2 + -0x38));
    uVar6 = 0x8876086c;
    if ((char)lVar4 == '\0') {
      uVar6 = -(uint)(*(int *)(param_2 + -0x2c) != 0) & 0x8876086c;
    }
    SetRect(&local_68,0,0,*(int *)(param_2 + -0x20),*(int *)(param_2 + -0x1c));
    ptVar5 = &local_68;
    if (param_3 != (tagRECT *)0x0) {
      ptVar5 = param_3;
    }
    local_78.left = ptVar5->left;
    local_78.top = ptVar5->top;
    local_78.right = ptVar5->right;
    local_78.bottom = ptVar5->bottom;
    IntersectRect(&local_58,&local_78,&local_68);
    if (-1 < (int)uVar6) {
      BVar3 = EqualRect(&local_58,&local_78);
      uVar7 = uVar6;
      if (BVar3 == 0) {
        uVar7 = 0x8876086c;
      }
      uVar6 = uVar7;
      if (((-1 < (int)uVar7) &&
          (lVar4 = *(longlong *)(param_2 + -0x78), uVar6 = 0x8876086c,
          (*(uint *)(lVar4 + 0x100) >> 0xb & 1) == 0)) &&
         (uVar6 = uVar7, *(char *)(param_1 + -0x1f) == '\0')) {
        FUN_180014ecc(param_2 + -0x80,0);
        cVar2 = (**(code **)(**(longlong **)(param_1 + -0x59a0) + 0x100))
                          (*(longlong **)(param_1 + -0x59a0),*(undefined4 *)(lVar4 + 0x94),
                           *(undefined4 *)(lVar4 + 0x98),
                           *(undefined8 *)(*(longlong *)(param_2 + -0x78) + 0x70),param_4,
                           (float)local_78.left,(float)local_78.top,(float)local_78.right,
                           (float)local_78.bottom);
        if (cVar2 == '\0') {
          uVar7 = 0x88760827;
        }
        uVar6 = uVar7;
        if (*(longlong *)(*(longlong *)(param_2 + -0x78) + 0x70) != 0) {
          FUN_180007f2c(*(longlong *)(param_2 + -0x58),param_2 + -0x80);
        }
      }
    }
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar6;
}

