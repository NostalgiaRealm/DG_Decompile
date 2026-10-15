/*
 * FUN_1000dda4 at 1000dda4
 * undefined4 __fastcall FUN_1000dda4(int param_1)
 * Address ranges: 1000dda4-1000de62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000dda4(int param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 uStack_8;
  
  puVar2 = (uint *)(*(int *)(param_1 + 0x2c) + -0x4dd4);
  if (*(int *)(param_1 + 0x2c) == 0) {
    puVar2 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar2 >> 2) & 1);
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((*(int **)(param_1 + 0x40) != (int *)0x0) &&
       (((*(uint *)(param_1 + 0x34) & 0x200) != 0 || (*(char *)(param_1 + 0x4b) != '\0')))) {
      pcVar3 = (char *)(*(int *)(param_1 + 0x2c) + -0x58d0);
      if (*(int *)(param_1 + 0x2c) == 0) {
        pcVar3 = &DAT_00000010;
      }
      if (*pcVar3 != '\0') {
        (**(code **)(**(int **)(param_1 + 0x40) + 0x10))();
        *(undefined4 *)(param_1 + 0xc) = 0;
        if (*(char *)(param_1 + 0x48) != '\0') {
          puVar2 = (uint *)(*(int *)(param_1 + 0x2c) + -0x48);
          if (*(int *)(param_1 + 0x2c) == 0) {
            puVar2 = (uint *)&DAT_00005898;
          }
          *puVar2 = *puVar2 & 0xfffffffe;
        }
        goto LAB_1000de56;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    LOCK();
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    UNLOCK();
    iVar1 = *(int *)(param_1 + 0x2c) + -0x58e0;
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar1 = 0;
    }
    if (*(int *)(iVar1 + 0x57b8) == param_1) {
      *(undefined1 *)(iVar1 + 0x58bc) = 1;
    }
  }
LAB_1000de56:
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return 0;
}

