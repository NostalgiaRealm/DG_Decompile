/*
 * FUN_10005fa1 at 10005fa1
 * uint __thiscall FUN_10005fa1(void * this, uint param_1)
 * Address ranges: 10005fa1-100060ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10005fa1(void *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint in_EAX;
  undefined3 extraout_var;
  uint uVar5;
  int *piVar6;
  undefined3 extraout_var_00;
  BOOL BVar7;
  bool bVar9;
  undefined3 uVar8;
  
  if ((*(char *)((int)this + 0x3c) == '\0') ||
     ((param_1 != 0 && (in_EAX = param_1, param_1 != *(uint *)((int)this + 0x30))))) {
    uVar5 = in_EAX & 0xffffff00;
  }
  else {
    *(undefined1 *)((int)this + 0x3c) = 0;
    while (*(int *)((int)this + 0x38) != 0) {
      Sleep(1);
    }
    piVar1 = (int *)((int)this + 0xc);
    if (*(int *)((int)this + 0x44) != 0) {
      (**(code **)((int)this + 0x4c))();
      (**(code **)(*(int *)*piVar1 + 0x1c))();
      FreeLibrary(*(HMODULE *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    cVar4 = FUN_10004240();
    if ((cVar4 == '\0') || (*(char *)((int)this + 0x3d) != '\0')) {
      if (*(char *)(*piVar1 + 0xe2) == '\0') {
        FUN_100094d8((void *)*piVar1,'\0');
      }
      bVar9 = false;
      piVar2 = (int *)((int)this + 0x1c);
      if (*(int *)(*piVar1 + 0x94) != 0) {
        piVar6 = FUN_10003a99((void *)*piVar2,*(int *)(*piVar1 + 0x94));
        bVar9 = false;
        if (piVar6 != (int *)0x0) {
          bVar9 = piVar6[9] != 0;
        }
      }
      FUN_1000da9c(this,'\0','\0');
      if (*(HWND *)(*piVar1 + 0x94) != (HWND)0x0) {
        FUN_1000387d((void *)*piVar2,*(HWND *)(*piVar1 + 0x94),
                     -(uint)(this != (void *)0x0) & (int)this + 4U);
      }
      (**(code **)(*(int *)*piVar1 + 8))();
      if (*(int *)((int)this + 0x20) != 0) {
        PostMessageW(*(HWND *)(*piVar1 + 0x94),0x401,0,0);
        while (*(int *)((int)this + 0x28) != 0) {
          Sleep(1);
        }
        *(undefined4 *)((int)this + 0x20) = 0;
      }
      iVar3 = *piVar2;
      piVar1 = (int *)(iVar3 + 0x308);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1000342b(iVar3);
      }
      FUN_10002e78(*piVar2);
      *(undefined4 *)((int)this + 0x30) = 0;
      uVar8 = extraout_var_00;
      if (!bVar9) {
        BVar7 = FreeLibrary(DAT_1005fa00);
        uVar8 = (int3)((uint)BVar7 >> 8);
      }
    }
    else {
      *(undefined1 *)((int)this + 0x3c) = 1;
      uVar8 = extraout_var;
    }
    uVar5 = CONCAT31(uVar8,1);
  }
  return uVar5;
}

