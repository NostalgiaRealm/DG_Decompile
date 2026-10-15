/*
 * FUN_1003fc30 at 1003fc30
 * undefined FUN_1003fc30(void)
 * Address ranges: 1003fc30-1003fdc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003fc30(undefined8 param_1,int param_2,int param_3,byte *param_4,byte *param_5,
                 uint param_6,uint param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_7 != 0) {
    do {
      uVar3 = 0;
      if (param_6 != 0) {
        if (*(int *)(param_5 + 4) == 3) {
          iVar1 = param_2;
          iVar2 = param_3;
          do {
            uVar3 = uVar3 + 1;
            *(undefined1 *)((uint)*param_5 + iVar2) = *(undefined1 *)((uint)*param_4 + iVar1);
            *(undefined1 *)((uint)param_5[1] + iVar2) = *(undefined1 *)((uint)param_4[1] + iVar1);
            *(undefined1 *)((uint)param_5[2] + iVar2) = *(undefined1 *)((uint)param_4[2] + iVar1);
            iVar1 = *(int *)(param_4 + 4) + iVar1;
            iVar2 = *(int *)(param_5 + 4) + iVar2;
          } while (uVar3 < param_6);
        }
        else {
          iVar1 = param_2;
          iVar2 = param_3;
          do {
            uVar3 = uVar3 + 1;
            *(undefined1 *)((uint)*param_5 + iVar2) = *(undefined1 *)((uint)*param_4 + iVar1);
            *(undefined1 *)((uint)param_5[1] + iVar2) = *(undefined1 *)((uint)param_4[1] + iVar1);
            *(undefined1 *)((uint)param_5[2] + iVar2) = *(undefined1 *)((uint)param_4[2] + iVar1);
            *(undefined1 *)((uint)param_5[3] + iVar2) = *(undefined1 *)((uint)param_4[3] + iVar1);
            iVar1 = *(int *)(param_4 + 4) + iVar1;
            iVar2 = *(int *)(param_5 + 4) + iVar2;
          } while (uVar3 < param_6);
        }
      }
      uVar4 = uVar4 + 1;
      param_2 = param_2 + param_8;
      param_3 = param_3 + param_9;
    } while (uVar4 < param_7);
  }
  return;
}

