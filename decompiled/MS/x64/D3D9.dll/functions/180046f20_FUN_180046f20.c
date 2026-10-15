/*
 * FUN_180046f20 at 180046f20
 * undefined __fastcall FUN_180046f20(longlong param_1)
 * Address ranges: 180046f20-1800470f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046f20(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  
  plVar1 = *(longlong **)(param_1 + 0xfcc0);
  if (plVar1 != (longlong *)0x0) {
    local_38 = 0;
    bVar4 = (byte)*(int *)(param_1 + 0xfce8);
    bVar2 = bVar4 & 0x1f;
    local_30 = *(uint *)((longlong)plVar1 + 0x24) >> bVar2;
    if (*(uint *)((longlong)plVar1 + 0x24) >> bVar2 == 0) {
      local_30 = 1;
    }
    bVar4 = bVar4 & 0x1f;
    local_2c = *(uint *)(plVar1 + 5) >> bVar4;
    if (*(uint *)(plVar1 + 5) >> bVar4 == 0) {
      local_2c = 1;
    }
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xfcf8) +
                      *(int *)(param_1 + 0xfce8),&local_38);
  }
  plVar1 = *(longlong **)(param_1 + 0xfcc8);
  if (plVar1 != (longlong *)0x0) {
    local_38 = 0;
    bVar4 = (byte)*(int *)(param_1 + 0xfcec);
    bVar2 = bVar4 & 0x1f;
    local_30 = *(uint *)((longlong)plVar1 + 0x24) >> bVar2;
    if (*(uint *)((longlong)plVar1 + 0x24) >> bVar2 == 0) {
      local_30 = 1;
    }
    bVar4 = bVar4 & 0x1f;
    local_2c = *(uint *)(plVar1 + 5) >> bVar4;
    if (*(uint *)(plVar1 + 5) >> bVar4 == 0) {
      local_2c = 1;
    }
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xfcfc) +
                      *(int *)(param_1 + 0xfcec),&local_38);
  }
  plVar1 = *(longlong **)(param_1 + 0xfcd0);
  if (plVar1 != (longlong *)0x0) {
    local_38 = 0;
    bVar4 = (byte)*(int *)(param_1 + 0xfcf0);
    bVar2 = bVar4 & 0x1f;
    local_30 = *(uint *)((longlong)plVar1 + 0x24) >> bVar2;
    if (*(uint *)((longlong)plVar1 + 0x24) >> bVar2 == 0) {
      local_30 = 1;
    }
    bVar4 = bVar4 & 0x1f;
    local_2c = *(uint *)(plVar1 + 5) >> bVar4;
    if (*(uint *)(plVar1 + 5) >> bVar4 == 0) {
      local_2c = 1;
    }
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xfd00) +
                      *(int *)(param_1 + 0xfcf0),&local_38);
  }
  plVar1 = *(longlong **)(param_1 + 0xfcd8);
  if (plVar1 != (longlong *)0x0) {
    local_38 = 0;
    bVar4 = (byte)*(int *)(param_1 + 0xfcf4);
    bVar2 = bVar4 & 0x1f;
    local_30 = *(uint *)((longlong)plVar1 + 0x24) >> bVar2;
    if (*(uint *)((longlong)plVar1 + 0x24) >> bVar2 == 0) {
      local_30 = 1;
    }
    bVar4 = bVar4 & 0x1f;
    local_2c = *(uint *)(plVar1 + 5) >> bVar4;
    if (*(uint *)(plVar1 + 5) >> bVar4 == 0) {
      local_2c = 1;
    }
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xfd04) +
                      *(int *)(param_1 + 0xfcf4),&local_38);
  }
  plVar1 = *(longlong **)(param_1 + 0xfce0);
  lVar3 = 0xbb4;
  if (*(char *)(param_1 + 0x7662) == '\0') {
    lVar3 = 0x7b0;
  }
  if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + lVar3) != 0)) {
    lVar3 = 3000;
    if (*(char *)(param_1 + 0x7662) == '\0') {
      lVar3 = 0x7b4;
    }
    if (*(int *)(param_1 + lVar3) != 0) {
      local_38 = 0;
      bVar4 = (byte)*(int *)(param_1 + 0xfd08);
      bVar2 = bVar4 & 0x1f;
      local_30 = *(uint *)((longlong)plVar1 + 0x24) >> bVar2;
      if (*(uint *)((longlong)plVar1 + 0x24) >> bVar2 == 0) {
        local_30 = 1;
      }
      bVar4 = bVar4 & 0x1f;
      local_2c = *(uint *)(plVar1 + 5) >> bVar4;
      if (*(uint *)(plVar1 + 5) >> bVar4 == 0) {
        local_2c = 1;
      }
      (**(code **)(*plVar1 + 0x18))
                (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xfd0c) +
                        *(int *)(param_1 + 0xfd08),&local_38);
    }
  }
  *(undefined1 *)(param_1 + 0xf6c4) = 0;
  return;
}

