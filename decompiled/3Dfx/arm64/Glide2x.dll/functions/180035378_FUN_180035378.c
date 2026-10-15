/*
 * FUN_180035378 at 180035378
 * undefined __cdecl FUN_180035378(longlong * param_1, char param_2, byte param_3)
 * Address ranges: 180035378-180035537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035378(longlong *param_1,char param_2,byte param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong extraout_x8;
  int iVar4;
  ulonglong uVar5;
  RECT local_60;
  
  uVar2 = FUN_180022ca0(param_1,*(int *)(param_1[0x28] + 0x2984));
  uVar3 = FUN_180022ca0(uVar2,*(int *)(extraout_x8 + 0x2988));
  uVar5 = 0;
  do {
    iVar4 = (int)uVar5;
    if ((param_2 != '\0' || iVar4 == (int)uVar2) || iVar4 == (int)uVar3) {
      if ((*(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) & 1) != 0) {
        if ((*(int *)((longlong)param_1 + uVar5 * 0x180 + 0x1bc) == 0) &&
           ((int)param_1[uVar5 * 0x30 + 0x38] == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_18001d850(param_1[0x28]);
          FUN_180022ae8(param_1,iVar4,1,0,0,(LONG)param_1[uVar5 * 0x30 + 0x2d],
                        *(LONG *)((longlong)param_1 + uVar5 * 0x180 + 0x16c),0);
          FUN_180034680(param_1,param_1 + uVar5 * 0x30 + 0x29,1,(undefined ****)0x0);
          FUN_180022920(param_1,iVar4,*(uint *)((longlong)param_1 + uVar5 * 0x180 + 0x1b4),
                        (int)param_1[uVar5 * 0x30 + 0x37],
                        *(char *)((longlong)param_1 + uVar5 * 0x180 + 0x1dd),
                        (uint)*(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e1),'\0',0,
                        *(undefined1 *)((longlong)param_1 + uVar5 * 0x180 + 0x1df),
                        *(undefined4 *)((longlong)param_1 + uVar5 * 0x180 + 0x1d4),
                        (int)param_1[uVar5 * 0x30 + 0x3b]);
          FUN_180029c60((longlong)(param_1 + uVar5 * 0x30 + 0x29),
                        (ulonglong)*(uint *)((longlong)param_1 + uVar5 * 0x180 + 0x16c));
          LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1[0x28] + 0x31b0) + 0x620));
        }
        else {
          local_60.right = (LONG)param_1[uVar5 * 0x30 + 0x2d];
          local_60.bottom = *(LONG *)((longlong)param_1 + uVar5 * 0x180 + 0x16c);
          local_60.left = 0;
          local_60.top = 0;
          UnionRect((LPRECT)((longlong)param_1 + uVar5 * 0x180 + 0x17c),
                    (RECT *)((longlong)param_1 + uVar5 * 0x180 + 0x17c),&local_60);
          FUN_180034680(param_1,param_1 + uVar5 * 0x30 + 0x29,1,(undefined ****)0x0);
          FUN_180029c60((longlong)(param_1 + uVar5 * 0x30 + 0x29),
                        (ulonglong)*(uint *)((longlong)param_1 + uVar5 * 0x180 + 0x16c));
          *(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) =
               *(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) & 0xfe;
        }
      }
      *(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) =
           *(byte *)((longlong)param_1 + uVar5 * 0x180 + 0x1e2) | param_3;
    }
    uVar5 = (ulonglong)(iVar4 + 1U);
  } while ((int)(iVar4 + 1U) < 3);
  return;
}

