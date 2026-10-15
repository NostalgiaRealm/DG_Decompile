/*
 * FUN_1002a3a7 at 1002a3a7
 * undefined __thiscall FUN_1002a3a7(void * this, char param_1, char param_2)
 * Address ranges: 1002a3a7-1002a51b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002a3a7(void *this,char param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  
  BVar4 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar4 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  if ((((*(byte *)((int)this + 0x1b8) & 8) == 0) || (*(int *)((int)this + 0x10c) == 0)) ||
     (param_1 != '\0')) {
    if (*(int *)((int)this + 0xfc) != 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        (**(code **)(*DAT_1006c238 + 0x18))(*(undefined4 *)((int)this + 0x10));
      }
      if (*(int *)((int)this + 0x14) != 0) {
        (**(code **)(*DAT_1006c238 + 0x1c))(*(undefined4 *)((int)this + 0x14));
      }
      piVar1 = *(int **)((int)this + 0x104);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int **)((int)this + 0x108);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined1 *)((int)this + 8) = 0;
      if (((*(byte *)((int)this + 0x1b8) & 8) == 0) || (*(int *)((int)this + 0x10c) != 0)) {
        if (param_2 == '\0') {
          FUN_1002bd91(this,0,0);
        }
      }
      else {
        FUN_1002bd91(this,0,*(int *)((int)this + 0x118));
        piVar1 = *(int **)((int)this + 0x110);
        while (piVar1 != (int *)0x0) {
          piVar2 = (int *)piVar1[0x44];
          piVar1[0x44] = 0;
          *(undefined1 *)(piVar1 + 2) = 0;
          (**(code **)(*piVar1 + 0x2c))(1,0);
          piVar1 = piVar2;
        }
        uVar6 = 0;
        do {
          iVar5 = *(int *)((int)this + uVar6 * 4 + 0x120);
          if (iVar5 != 0) {
            *(undefined1 *)(iVar5 + 8) = 0;
            (**(code **)(**(int **)((int)this + uVar6 * 4 + 0x120) + 0x2c))(1,0);
            *(undefined4 *)((int)this + uVar6 * 4 + 0x120) = 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 5);
      }
      FUN_10025677(*(void **)((int)this + 0xfc),this);
      FUN_1002a1c6(this);
    }
    uVar6 = 0;
    do {
      iVar5 = uVar6 * 0x1c;
      puVar3 = *(undefined4 **)((int)this + iVar5 + 0x4c);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_1002a017((int)this + iVar5 + 0x34,puVar3);
        *(undefined4 *)((int)this + iVar5 + 0x4c) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 7);
    FUN_10029e6d(this);
    FUN_10060be1(this);
  }
  LeaveCriticalSection(DAT_1006c254);
  return;
}

