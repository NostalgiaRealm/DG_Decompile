/*
 * FUN_180008018 at 180008018
 * undefined __fastcall FUN_180008018(longlong param_1, longlong param_2)
 * Address ranges: 180008018-1800080d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008018(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_res18 [4];
  uint in_stack_ffffffffffffffc8;
  
  uVar4 = *(uint *)(param_2 + 0x38);
  uVar5 = uVar4 & 0xffff;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  if (uVar5 != 0) {
    local_res18[0] = uVar5;
    uVar3 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    do {
      uVar1 = *(undefined8 *)(param_2 + 0xe0);
      pbVar2 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar3 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
      in_stack_ffffffffffffffc8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                (*(longlong **)(param_1 + 0x28),uVar3 & 0xff,0,uVar1,0,0,0,0);
      uVar3 = 0;
      if (local_res18[0] != 0) {
        for (; (local_res18[0] >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    } while (local_res18[0] != 0);
    *(uint *)(param_1 + 0xd18) = *(uint *)(param_1 + 0xd18) | uVar5;
  }
  uVar5 = uVar4 >> 0x10;
  if (uVar4 >> 0x10 != 0) {
    local_res18[0] = uVar5;
    uVar4 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    do {
      uVar1 = *(undefined8 *)(param_2 + 0xe0);
      pbVar2 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar4 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
      in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
                (*(longlong **)(param_1 + 0x28),uVar4 & 0xff,0,uVar1,in_stack_ffffffffffffffc8);
      uVar4 = 0;
      if (local_res18[0] != 0) {
        for (; (local_res18[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    } while (local_res18[0] != 0);
    *(uint *)(param_1 + 0x67fc) = *(uint *)(param_1 + 0x67fc) | uVar5;
  }
  return;
}

