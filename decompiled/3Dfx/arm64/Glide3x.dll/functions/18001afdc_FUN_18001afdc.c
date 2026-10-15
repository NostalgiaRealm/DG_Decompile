/*
 * FUN_18001afdc at 18001afdc
 * undefined __cdecl FUN_18001afdc(longlong * param_1, char param_2, byte param_3)
 * Address ranges: 18001afdc-18001b12b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001afdc(longlong *param_1,char param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_180016f80(param_1,*(int *)(param_1[0x28] + 0x29fc));
  uVar2 = FUN_180016f80(param_1,*(int *)(param_1[0x28] + 0x2a00));
  uVar3 = 0;
  do {
    if ((param_2 != '\0' || uVar3 == uVar1) || uVar3 == uVar2) {
      if ((*(byte *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1e2) & 1) != 0) {
        if ((*(int *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1bc) == 0) &&
           ((int)param_1[(ulonglong)uVar3 * 0x2e + 0x38] == 0)) {
          FUN_18001a150(param_1,param_1 + (ulonglong)uVar3 * 0x2e + 0x29,1,0);
          *(byte *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1e2) =
               *(byte *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1e2) & 0xfe;
        }
        else {
          FUN_180016dc8(param_1,uVar3,1,0,0,(LONG)param_1[(ulonglong)uVar3 * 0x2e + 0x2d],
                        *(LONG *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x16c),0);
          FUN_18001a150(param_1,param_1 + (ulonglong)uVar3 * 0x2e + 0x29,1,0);
          FUN_180016c00(param_1,uVar3,
                        *(uint *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1b4),
                        (int)param_1[(ulonglong)uVar3 * 0x2e + 0x37],
                        *(char *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1dd),
                        (uint)*(byte *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1e1),'\0',0
                        ,*(undefined1 *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1df),
                        *(undefined4 *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1d4),
                        (int)param_1[(ulonglong)uVar3 * 0x2e + 0x3b]);
          FUN_18001d758((longlong)(param_1 + (ulonglong)uVar3 * 0x2e + 0x29),
                        (ulonglong)*(uint *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x16c));
        }
      }
      *(byte *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1e2) =
           *(byte *)((longlong)param_1 + (ulonglong)uVar3 * 0x170 + 0x1e2) | param_3;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 7);
  return;
}

