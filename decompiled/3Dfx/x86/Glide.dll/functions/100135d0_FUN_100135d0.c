/*
 * FUN_100135d0 at 100135d0
 * undefined4 __fastcall FUN_100135d0(void * param_1)
 * Address ranges: 100135d0-100136f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100135d0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint in_EAX;
  int *piVar4;
  BOOL BVar5;
  uint uVar6;
  bool bVar7;
  
  if (*(char *)((int)param_1 + 0x3c) == '\0') {
    uVar6 = in_EAX & 0xffffff00;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x3c) = 0;
    while (*(int *)((int)param_1 + 0x38) != 0) {
      Sleep(1);
    }
    piVar1 = (int *)((int)param_1 + 0xc);
    if (*(int *)((int)param_1 + 0x44) != 0) {
      (**(code **)((int)param_1 + 0x4c))();
      (**(code **)(*(int *)*piVar1 + 0x1c))();
      FreeLibrary(*(HMODULE *)((int)param_1 + 0x44));
      *(undefined4 *)((int)param_1 + 0x44) = 0;
    }
    if (*(char *)(*piVar1 + 0xde) == '\0') {
      FUN_1001a143((void *)*piVar1,'\0');
    }
    bVar7 = false;
    piVar2 = (int *)((int)param_1 + 0x1c);
    if (*(int *)(*piVar1 + 0x94) != 0) {
      piVar4 = FUN_10003acf((void *)*piVar2,*(int *)(*piVar1 + 0x94));
      bVar7 = false;
      if (piVar4 != (int *)0x0) {
        bVar7 = piVar4[9] != 0;
      }
    }
    FUN_10019be5(param_1,'\0','\0');
    if (*(HWND *)(*piVar1 + 0x94) != (HWND)0x0) {
      FUN_100038b3((void *)*piVar2,*(HWND *)(*piVar1 + 0x94),
                   -(uint)(param_1 != (void *)0x0) & (int)param_1 + 4U);
    }
    (**(code **)(*(int *)*piVar1 + 8))();
    if (*(int *)((int)param_1 + 0x20) != 0) {
      PostMessageW(*(HWND *)(*piVar1 + 0x94),0x401,0,0);
      while (*(int *)((int)param_1 + 0x28) != 0) {
        Sleep(1);
      }
      *(undefined4 *)((int)param_1 + 0x20) = 0;
    }
    iVar3 = *piVar2;
    piVar1 = (int *)(iVar3 + 0x308);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10003461(iVar3);
    }
    BVar5 = FUN_10002eae(*piVar2);
    *(undefined4 *)((int)param_1 + 0x30) = 0;
    if (!bVar7) {
      BVar5 = FreeLibrary(DAT_1005974c);
    }
    uVar6 = CONCAT31((int3)((uint)BVar5 >> 8),1);
  }
  return uVar6;
}

