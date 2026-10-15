/*
 * FUN_1003e15a at 1003e15a
 * bool __fastcall FUN_1003e15a(int param_1)
 * Address ranges: 1003e15a-1003e260
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1003e15a(int param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  
  piVar1 = (int *)(param_1 + 0x1530);
  if ((*(char *)(param_1 + 0x1755) != '\0') ||
     ((*piVar1 != 0 && (*(char *)(*piVar1 + 0xd4) != '\0')))) {
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      FUN_1005c9cc((int *)(param_1 + 0x104),0,0x48);
    }
    else {
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar2 + 0x94);
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(iVar2 + 0x98);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(iVar2 + 0x9c);
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar2 + 0xa0);
      *(int *)(param_1 + 0x104) = *(int *)(iVar2 + 0x84);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar2 + 0x88);
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(iVar2 + 0x8c);
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(iVar2 + 0x90);
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(iVar2 + 0xb4);
      *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(iVar2 + 0xb8);
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(iVar2 + 0xbc);
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(iVar2 + 0xc0);
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(iVar2 + 0xa4);
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(iVar2 + 0xa8);
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(iVar2 + 0xac);
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(iVar2 + 0xb0);
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(iVar2 + 0xc4);
      dVar3 = 0.001;
      FUN_1005c520();
      *(float *)(param_1 + 0x148) = (float)dVar3;
      *(undefined1 *)(*piVar1 + 0xd4) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 100))(param_1 + 0x104);
    *(undefined1 *)(param_1 + 0x1755) = 0;
  }
  return *piVar1 != 0;
}

