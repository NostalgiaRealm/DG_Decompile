/*
 * FUN_1800b3204 at 1800b3204
 * uint __fastcall FUN_1800b3204(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 1800b3204-1800b33b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800b3204(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int local_38 [3];
  undefined4 local_2c;
  
  if (param_2 == 0) {
    return 0x8876086c;
  }
  if (param_3 == 0) {
    return 0x8876086c;
  }
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar5 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar5 = true;
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
    }
  }
  if ((((*(byte *)(param_2 + -0x30) & 3) != 0) &&
      (*(int *)(param_2 + -0x20) == *(int *)(param_3 + -0x20))) &&
     (*(int *)(param_2 + -0x1c) == *(int *)(param_3 + -0x1c))) {
    if (((*(int *)(param_2 + -0x28) == 0) || (*(int *)(param_2 + -0x28) == 1)) &&
       (*(int *)(param_2 + -0x24) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x8876086c;
    }
    if ((int)uVar8 < 0) goto LAB_1800b32e3;
    if (*(int *)(param_2 + -0x38) != *(int *)(param_3 + -0x38)) {
      uVar8 = 0x8876086c;
    }
    if (((int)uVar8 < 0) ||
       (((*(int *)(param_2 + -0x2c) == 0 && (*(int *)(param_3 + -0x2c) == 2)) &&
        (((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0 &&
         ((*(uint *)(*(longlong *)(param_3 + -0x78) + 0x100) >> 0xb & 1) == 0))))))
    goto LAB_1800b32e3;
  }
  uVar8 = 0x8876086c;
LAB_1800b32e3:
  bVar3 = false;
  bVar4 = false;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0xb0);
    if (((*(uint *)(lVar1 + 0x50) & 0x400) == 0) || (lVar1 == param_2 + -0x80)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  if (*(longlong *)(param_3 + 0x48) != 0) {
    puVar2 = *(undefined8 **)(*(longlong *)(param_3 + 0x48) + 0xb0);
    if (((*(uint *)(puVar2 + 10) & 0x400) == 0) || (puVar2 == (undefined8 *)(param_3 + -0x80))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  uVar7 = 0x8876086c;
  if ((((!bVar3) && (!bVar4)) && (uVar7 = uVar8, -1 < (int)uVar8)) &&
     (uVar7 = 0x88760868, *(char *)(param_1 + -0x1f) == '\0')) {
    local_38[2] = *(undefined4 *)(param_2 + -0x20);
    local_2c = *(undefined4 *)(param_2 + -0x1c);
    local_38[0] = 0;
    local_38[1] = 0;
    uVar7 = FUN_1800b0ee8(param_1 + -0x6838,param_2 + -0x80,(undefined8 *)(param_3 + -0x80),local_38
                          ,(undefined8 *)local_38,0);
  }
  if (bVar5) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar7;
}

