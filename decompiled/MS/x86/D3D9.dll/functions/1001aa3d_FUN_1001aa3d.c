/*
 * FUN_1001aa3d at 1001aa3d
 * undefined __stdcall FUN_1001aa3d(int param_1, int param_2, int * param_3)
 * Address ranges: 1001aa3d-1001aab2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001aa3d(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100cfed0(param_3,0,0xcc);
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + 0x214 + uVar1);
      switch(uVar2) {
      case 0:
      case 1:
      case 3:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
        param_3[uVar2 * 3] = param_2 + (uint)*(byte *)(param_1 + 0x17 + uVar2 * 8) * 4;
        *(undefined1 *)(param_3 + uVar2 * 3 + 2) = *(undefined1 *)(param_1 + 0x18 + uVar2 * 8);
        param_3[uVar2 * 3 + 1] = *(int *)(param_1 + 0xc);
        *(undefined1 *)((int)param_3 + uVar2 * 0xc + 9) =
             *(undefined1 *)(param_1 + 0x15 + uVar2 * 8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}

