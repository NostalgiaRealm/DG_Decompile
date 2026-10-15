/*
 * FUN_10010ef4 at 10010ef4
 * undefined4 __fastcall FUN_10010ef4(int param_1)
 * Address ranges: 10010ef4-10010fb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10010ef4(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uStack_8;
  
  puVar2 = (uint *)(*(int *)(param_1 + 0x2c) + -0x4dd4);
  if (*(int *)(param_1 + 0x2c) == 0) {
    puVar2 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar2 >> 2) & 1);
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((*(int **)(param_1 + 0x44) == (int *)0x0) ||
       (((*(uint *)(param_1 + 0x34) & 0x200) == 0 && (*(char *)(param_1 + 99) == '\0')))) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      LOCK();
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      UNLOCK();
      uVar1 = 0;
      iVar3 = *(int *)(param_1 + 0x2c) + -0x58e0;
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar3 = 0;
      }
      do {
        if (*(int *)(iVar3 + 0x57bc + uVar1 * 4) == param_1) {
          *(uint *)(iVar3 + 0x58ac) = *(uint *)(iVar3 + 0x58ac) | 1 << (uVar1 & 0x1f);
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x10);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(uint *)(param_1 + 0x5c) != 0xffffffff) {
        puVar2 = (uint *)(*(int *)(param_1 + 0x2c) + -0x50);
        if (*(int *)(param_1 + 0x2c) == 0) {
          puVar2 = (uint *)&DAT_00005890;
        }
        *puVar2 = *puVar2 & ~(1 << (*(uint *)(param_1 + 0x5c) & 0x1f));
      }
    }
  }
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return 0;
}

