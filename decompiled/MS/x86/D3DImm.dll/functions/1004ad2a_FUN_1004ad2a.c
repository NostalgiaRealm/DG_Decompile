/*
 * FUN_1004ad2a at 1004ad2a
 * bool __thiscall FUN_1004ad2a(void * this, undefined4 param_1, int * param_2)
 * Address ranges: 1004ad2a-1004adde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1004ad2a(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = false;
  if ((*(char *)((int)this + 7) == '\0') && (iVar3 = FUN_10042a6d(this,0x1005d2a0), iVar3 != 0)) {
    piVar2 = *(int **)(iVar3 + 0x10);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    FUN_1003d453(this);
    if ((iVar1 + -1 == 0) && (*(char *)((int)this + 6) == '\0')) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
    uVar6 = (uint)*(ushort *)((int)this + 4);
    iVar3 = 0;
    uVar4 = 0;
    if (uVar6 != 0) {
      do {
        uVar5 = 0;
        if (uVar4 != 0) {
          do {
            uVar6 = (uint)*(ushort *)((int)this + 4);
            if (*(int *)((int)this + uVar4 * 0x1c + 0x18) ==
                *(int *)((int)this + uVar5 * 0x1c + 0x18)) goto LAB_1004adb2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar4);
        }
        if (uVar5 == uVar4) {
          iVar3 = iVar3 + **(int **)(uVar4 * 0x1c + 0x18 + (int)this);
        }
LAB_1004adb2:
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar6);
    }
    bVar7 = iVar3 == 0;
    if (iVar3 == 0) {
      *(undefined1 *)((int)this + 7) = 1;
    }
    *(undefined4 *)this = 0;
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1 + -1;
    }
  }
  return bVar7;
}

