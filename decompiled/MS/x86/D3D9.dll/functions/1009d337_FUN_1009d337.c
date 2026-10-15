/*
 * FUN_1009d337 at 1009d337
 * undefined4 __stdcall FUN_1009d337(int param_1, undefined4 * param_2)
 * Address ranges: 1009d337-1009d46c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009d337(int param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  HDC hdc;
  HGDIOBJ pvVar4;
  uint uVar5;
  int extraout_EDX;
  undefined4 uVar6;
  uint local_c;
  int local_8;
  
  uVar6 = 0x8876086c;
  if ((((param_2 != (undefined4 *)0x0) && (*(int *)(param_1 + -0x28) != 3)) &&
      ((*(int *)(param_1 + -0x28) != 0 ||
       (((*(uint *)(param_1 + -0x2c) & 0x200) != 0 ||
        ((*(uint *)(*(int *)(param_1 + -0x58) + 0xb8) >> 10 & 1) != 0)))))) &&
     ((*(uint *)(*(int *)(param_1 + -0x58) + 0xb8) >> 0xb & 1) == 0)) {
    iVar3 = FUN_10012c02(param_1 + -0x5c);
    if (((*(int *)(param_1 + -0x34) == 0x15) || (*(int *)(param_1 + -0x34) == 0x19)) ||
       (*(int *)(param_1 + -0x34) == 0x20)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((((char)iVar3 != '\0') || (bVar2)) && (bVar2 = FUN_1002e0e9(extraout_EDX), bVar2)) {
      iVar3 = *(int *)(param_1 + -0x58);
      hdc = CreateCompatibleDC((HDC)0x0);
      *(HDC *)(iVar3 + 0x94) = hdc;
      if (hdc != (HDC)0x0) {
        pvVar4 = SelectObject(hdc,*(HGDIOBJ *)(iVar3 + 0x90));
        *(HGDIOBJ *)(iVar3 + 0x98) = pvVar4;
        if (((*(int *)(param_1 + -0x14) == 0) || ((*(uint *)(param_1 + -0x2c) & 0x400) == 0)) &&
           (uVar5 = FUN_10012c1f((void *)(param_1 + -0x5c),&local_c,(RECT *)0x0,0,1),
           -1 < (int)uVar5)) {
          iVar1 = *(int *)(param_1 + -0x58);
          *(int *)(iVar1 + 0x9c) = local_8;
          *(uint *)(iVar1 + 0xa0) = local_c;
          *param_2 = *(undefined4 *)(iVar3 + 0x94);
          if (local_8 != 0) {
            FUN_1002d7bb(*(int *)(param_1 + -0x58) + 0x4c);
          }
          uVar6 = 0;
        }
        else {
          SelectObject(*(HDC *)(iVar3 + 0x94),*(HGDIOBJ *)(iVar3 + 0x98));
          DeleteDC(*(HDC *)(iVar3 + 0x94));
          *(undefined4 *)(iVar3 + 0x94) = 0;
        }
      }
    }
  }
  return uVar6;
}

