/*
 * FUN_18002a3e0 at 18002a3e0
 * undefined __cdecl FUN_18002a3e0(longlong * param_1, char param_2, byte param_3)
 * Address ranges: 18002a3e0-18002a5a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a3e0(longlong *param_1,char param_2,byte param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  RECT local_60;
  
  uVar2 = FUN_180016f80(param_1,*(int *)(param_1[0x28] + 0x29fc));
  uVar3 = FUN_180016f80(param_1,*(int *)(param_1[0x28] + 0x2a00));
  uVar5 = 0;
  do {
    uVar4 = (uint)uVar5;
    if ((param_2 != '\0' || uVar4 == uVar2) || uVar4 == uVar3) {
      if ((*(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) & 1) != 0) {
        if ((*(int *)((longlong)param_1 + uVar5 * 0x180 + 0x1bc) == 0) &&
           ((int)param_1[uVar5 * 0x30 + 0x38] == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_180011b28(param_1[0x28]);
          FUN_180016dc8(param_1,uVar4,1,0,0,(LONG)param_1[uVar5 * 0x30 + 0x2d],
                        *(LONG *)((longlong)param_1 + uVar5 * 0x180 + 0x16c),0);
          FUN_1800296e8(param_1,param_1 + uVar5 * 0x30 + 0x29,1,(undefined ****)0x0);
          FUN_180016c00(param_1,uVar4,*(uint *)((longlong)param_1 + uVar5 * 0x180 + 0x1b4),
                        (int)param_1[uVar5 * 0x30 + 0x37],
                        *(char *)((longlong)param_1 + uVar5 * 0x180 + 0x1dd),
                        (uint)*(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e1),'\0',0,
                        *(undefined1 *)((longlong)param_1 + uVar5 * 0x180 + 0x1df),
                        *(undefined4 *)((longlong)param_1 + uVar5 * 0x180 + 0x1d4),
                        (int)param_1[uVar5 * 0x30 + 0x3b]);
          FUN_18001d758((longlong)(param_1 + uVar5 * 0x30 + 0x29),
                        (ulonglong)*(uint *)((longlong)param_1 + uVar5 * 0x180 + 0x16c));
          LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1[0x28] + 0x3330) + 0x620));
        }
        else {
          local_60.right = (LONG)param_1[uVar5 * 0x30 + 0x2d];
          local_60.bottom = *(LONG *)((longlong)param_1 + uVar5 * 0x180 + 0x16c);
          local_60.left = 0;
          local_60.top = 0;
          UnionRect((LPRECT)((longlong)param_1 + uVar5 * 0x180 + 0x17c),
                    (RECT *)((longlong)param_1 + uVar5 * 0x180 + 0x17c),&local_60);
          FUN_1800296e8(param_1,param_1 + uVar5 * 0x30 + 0x29,1,(undefined ****)0x0);
          FUN_18001d758((longlong)(param_1 + uVar5 * 0x30 + 0x29),
                        (ulonglong)*(uint *)((longlong)param_1 + uVar5 * 0x180 + 0x16c));
          *(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) =
               *(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) & 0xfe;
        }
      }
      *(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) =
           *(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) | param_3;
    }
    uVar5 = (ulonglong)(uVar4 + 1);
  } while ((int)(uVar4 + 1) < 7);
  return;
}

