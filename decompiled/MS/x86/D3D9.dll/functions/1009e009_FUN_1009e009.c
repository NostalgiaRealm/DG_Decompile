/*
 * FUN_1009e009 at 1009e009
 * undefined4 __stdcall FUN_1009e009(int param_1, int param_2)
 * Address ranges: 1009e009-1009e0ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009e009(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint local_1c [6];
  
  iVar1 = param_2;
  uVar5 = 0x8876086c;
  if ((((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) || ((param_2 == 3 || (param_2 == 6)))
       ) || (param_2 == 7)) && ((param_2 != 0 && (uVar5 = 0, param_2 != *(int *)(param_1 + 0x60)))))
  {
    iVar3 = *(int *)(param_1 + -100);
    local_1c[0] = 0;
    uVar5 = 0x8876086c;
    local_1c[1] = 0x100;
    local_1c[2] = 0x200;
    piVar4 = (int *)(iVar3 + 0x50);
    local_1c[3] = 0x400;
    if (iVar3 == 0) {
      piVar4 = (int *)&DAT_00006704;
    }
    local_1c[4] = 0x800;
    local_1c[5] = 0x1000;
    if ((*(uint *)(*piVar4 + 0x40) & local_1c[param_2]) != 0) {
      puVar2 = (uint *)(iVar3 + -0x58e4);
      if (iVar3 == 0) {
        puVar2 = (uint *)&DAT_00000dd0;
      }
      FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*puVar2 >> 2) & 1);
      iVar3 = FUN_100028ba();
      if ((char)iVar3 == '\0') {
        (**(code **)(**(int **)(param_1 + -0x34) + 0x4c))(iVar1 != 1);
      }
      *(int *)(param_1 + 0x60) = iVar1;
      uVar5 = 0;
      FUN_10003e89((char *)((int)&param_2 + 3));
    }
  }
  return uVar5;
}

