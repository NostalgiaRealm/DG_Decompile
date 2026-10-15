/*
 * FUN_1000347b at 1000347b
 * undefined __fastcall FUN_1000347b(int param_1)
 * Address ranges: 1000347b-1000352f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000347b(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x10));
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0xc));
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x14));
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x18));
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      if ((*(char *)(param_1 + 0x26 + uVar3) != '\0') &&
         (piVar1 = &DAT_100ba72c + uVar3 * 0x8a, *piVar1 != 0)) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(int *)(&DAT_100ba728)[uVar3 * 0x8a] + 8))();
          if ((undefined4 *)(&DAT_100ba728)[uVar3 * 0x8a] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)(&DAT_100ba728)[uVar3 * 0x8a])(1);
          }
          (&DAT_100ba728)[uVar3 * 0x8a] = 0;
        }
      }
      FUN_100227e1(*(int *)(*(int *)(param_1 + 0x48) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x4c));
  }
  FUN_10023a2f();
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

