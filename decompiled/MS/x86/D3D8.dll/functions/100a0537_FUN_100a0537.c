/*
 * FUN_100a0537 at 100a0537
 * undefined4 __fastcall FUN_100a0537(int * param_1)
 * Address ranges: 100a0537-100a0566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100a0537(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    uVar2 = in_EAX & 0xffffff00;
  }
  else {
    uVar2 = 1;
    if (1 < uVar1) {
      do {
        in_EAX = *(uint *)(*param_1 + uVar2 * 4);
        *(uint *)(*param_1 + -4 + uVar2 * 4) = in_EAX;
        uVar2 = uVar2 + 1;
        uVar1 = param_1[1];
      } while (uVar2 < uVar1);
    }
    uVar2 = CONCAT31((int3)(in_EAX >> 8),1);
    param_1[1] = uVar1 - 1;
  }
  return uVar2;
}

