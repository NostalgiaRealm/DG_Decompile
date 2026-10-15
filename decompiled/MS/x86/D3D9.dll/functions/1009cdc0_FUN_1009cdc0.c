/*
 * FUN_1009cdc0 at 1009cdc0
 * undefined __fastcall FUN_1009cdc0(undefined4 * param_1)
 * Address ranges: 1009cdc0-1009cf19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009cdc0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *this;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_10;
  uint local_c;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)(param_1[4] + 0xdd0) >> 2) & 1);
  if ((*(char *)(param_1[6] + 0xac1d) != '\0') &&
     (puVar2 = *(undefined4 **)(param_1[6] + 0x4f98), puVar2 != (undefined4 *)0x0)) {
    FUN_1009e840(puVar2);
  }
  if ((*(char *)(param_1[6] + 0xac1c) != '\0') &&
     (puVar2 = *(undefined4 **)(param_1[6] + 0x4f94), puVar2 != (undefined4 *)0x0)) {
    FUN_1009c9c5(puVar2);
  }
  if (*(undefined4 **)(param_1[6] + 0x4f9c) != (undefined4 *)0x0) {
    FUN_1009e598(*(undefined4 **)(param_1[6] + 0x4f9c));
  }
  local_c = 0;
  puVar1 = (uint *)(param_1[6] + 0xac50);
  local_10 = *puVar1;
  while( true ) {
    uVar5 = 0;
    if (local_10 != 0) {
      for (; (local_10 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_10 != 0) goto LAB_1009ce9a;
    local_c = local_c + 0x20;
    if (4 < local_c) break;
    local_10 = *(uint *)(param_1[6] + 0xac50 + (local_c >> 5) * 4);
  }
LAB_1009ceab:
  this = (void *)param_1[4];
  uVar7 = 0;
  uVar5 = param_1[5];
  uVar6 = *(uint *)((int)this + 0x6794);
  if (uVar6 != 0) {
    do {
      if (*(undefined4 **)(*(int *)((int)this + 0x6790) + uVar7 * 4) == param_1) {
        if (uVar7 != 0xffffffff) {
          uVar7 = uVar7 + 1;
          if (uVar7 < uVar6) {
            do {
              *(undefined4 *)(*(int *)((int)this + 0x6790) + -4 + uVar7 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x6790) + uVar7 * 4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)((int)this + 0x6794));
          }
          *(int *)((int)this + 0x6794) = *(int *)((int)this + 0x6794) + -1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  FUN_10004f38(this,uVar5);
  *param_1 = &PTR_FUN_100d7074;
  FUN_100cfd6c(param_1);
  FUN_10003e89(&local_5);
  return;
LAB_1009ce9a:
  while( true ) {
    pbVar4 = (byte *)((int)&local_10 + ((int)uVar5 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar5 & 7));
    uVar6 = local_c;
    if (local_c + uVar5 == -1) break;
    piVar3 = *(int **)(param_1[6] + 0x4fa0 + (local_c + uVar5) * 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    uVar5 = 0;
    if (local_10 != 0) {
      for (; (local_10 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_10 == 0) {
      do {
        uVar6 = uVar6 + 0x20;
        local_c = uVar6;
        if (4 < uVar6) goto LAB_1009ceab;
        local_10 = puVar1[uVar6 >> 5];
        uVar5 = 0;
        if (local_10 != 0) {
          for (; (local_10 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_10 == 0);
    }
  }
  goto LAB_1009ceab;
}

