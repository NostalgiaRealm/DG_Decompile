/*
 * FUN_1003f218 at 1003f218
 * undefined __fastcall FUN_1003f218(void * param_1)
 * Address ranges: 1003f218-1003f455
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003f218(void *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint *local_8;
  
  if (*(char *)((int)param_1 + 0x100) != '\0') {
    local_c = &local_10;
    local_8 = (uint *)CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      local_8 = (uint *)(in_FPUControlWord & 0xf0ff | 0x23f);
    }
    uVar3 = 0;
    if (*(int *)((int)param_1 + 0x17e0) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)param_1 + 0x17dc) + uVar3 * 4) + 4))
                  (-(uint)(param_1 != (void *)0x0) & (int)param_1 + 0x17d8U);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)param_1 + 0x17e0));
    }
    uVar3 = 0;
    *(undefined1 *)((int)param_1 + 0x100) = 0;
    if (*(int *)((int)param_1 + 0x218) != 0) {
      do {
        if (*(int *)(*(int *)((int)param_1 + 0x214) + uVar3 * 4) != 0) {
          FUN_1003dbaa(param_1,uVar3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)param_1 + 0x218));
    }
    thunk_FUN_1005c76c(*(LPVOID *)((int)param_1 + 0x214));
    *(undefined4 *)((int)param_1 + 0x214) = 0;
    *(undefined4 *)((int)param_1 + 0x218) = 0;
    *(undefined4 *)((int)param_1 + 0x21c) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x14) + 0xc))();
    (**(code **)(**(int **)((int)param_1 + 0x14) + 4))();
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    uVar3 = 0;
    do {
      piVar1 = *(int **)((int)param_1 + uVar3 * 4 + 0x14f4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)((int)param_1 + uVar3 * 4 + 0x14f4) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
    piVar1 = *(int **)((int)param_1 + 0x1514);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)param_1 + 0x1514) = 0;
    }
    piVar1 = *(int **)((int)param_1 + 0x1520);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    uVar3 = 0;
    *(undefined4 *)((int)param_1 + 0x151c) = 0;
    *(undefined4 *)((int)param_1 + 0x1520) = 0;
    if (*(int *)((int)param_1 + 0x1528) != 0) {
      do {
        *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1524) + uVar3 * 8) + 0x84) = 0;
        piVar1 = *(int **)(*(int *)((int)param_1 + 0x1524) + 4 + uVar3 * 8);
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)param_1 + 0x1528));
    }
    thunk_FUN_1005c76c(*(LPVOID *)((int)param_1 + 0x1524));
    *(undefined4 *)((int)param_1 + 0x1524) = 0;
    *(undefined4 *)((int)param_1 + 0x1528) = 0;
    *(undefined4 *)((int)param_1 + 0x152c) = 0;
    thunk_FUN_1005c76c(*(LPVOID *)((int)param_1 + 0x1674));
    *(undefined4 *)((int)param_1 + 0x1674) = 0;
    FUN_10005dd1((int)param_1);
    piVar1 = *(int **)((int)param_1 + 0xa7c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)((int)param_1 + 0xa78);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    local_8 = &local_10;
    *(undefined4 *)((int)param_1 + 0xa7c) = 0;
    *(undefined4 *)((int)param_1 + 0xa78) = 0;
    cVar2 = (**(code **)(**(int **)((int)param_1 + 0xa70) + 0x30))();
    if (cVar2 == '\0') {
      (**(code **)(**(int **)((int)param_1 + 0xa70) + 0x40))();
    }
    else {
      (**(code **)(**(int **)((int)param_1 + 0xa70) + 0x3c))();
    }
  }
  return;
}

