/*
 * FUN_1001a34d at 1001a34d
 * undefined __thiscall FUN_1001a34d(void * this, uint param_1, RECT * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, RECT * param_7)
 * Address ranges: 1001a34d-1001a5bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001a34d(void *this,uint param_1,RECT *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,RECT *param_7)

{
  bool bVar1;
  void *pvVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  tagRECT local_110 [16];
  void *local_10;
  uint local_c;
  char local_5;
  
  local_10 = this;
  FUN_10017f75((int)this);
  if (param_2 != (RECT *)0x0) {
    do {
      if (param_1 == 0) {
        return;
      }
      iVar5 = 0;
      local_c = param_1;
      if (0x10 < param_1) {
        local_c = 0x10;
      }
      uVar6 = local_c;
      if (local_c != 0) {
        do {
          BVar3 = IntersectRect(local_110 + iVar5,param_2,param_7);
          pvVar2 = local_10;
          iVar4 = iVar5 + 1;
          if (BVar3 == 0) {
            iVar4 = iVar5;
          }
          param_2 = param_2 + 1;
          uVar6 = uVar6 - 1;
          iVar5 = iVar4;
        } while (uVar6 != 0);
        if (iVar4 != 0) {
          (**(code **)(**(int **)((int)local_10 + 0x14) + 0x18))
                    (iVar4,local_110,param_3,param_4,param_5,param_6,0);
          local_5 = '\0';
          if ((*(char *)((int)pvVar2 + 0xd8d) == '\0') &&
             (*(char *)(*(int *)((int)pvVar2 + 0xc) + 0x75e) == '\0')) {
            if (*(char *)((int)pvVar2 + 0x2a1) != '\0') goto LAB_1001a41c;
          }
          else {
            local_5 = '\x01';
LAB_1001a41c:
            (**(code **)(**(int **)((int)pvVar2 + 0x14) + 0x14))();
            (**(code **)(**(int **)((int)pvVar2 + 0x18) + 0x14))
                      (*(undefined4 *)((int)pvVar2 + 0x298),*(undefined4 *)((int)pvVar2 + 0x29c));
            if ((local_5 != '\0') &&
               ((**(code **)(**(int **)((int)pvVar2 + 0x18) + 0x14))
                          (*(undefined4 *)((int)pvVar2 + 0x298),*(undefined4 *)((int)pvVar2 + 0x29c)
                          ), *(char *)(*(int *)((int)pvVar2 + 0xc) + 0x75f) != '\0')) {
              DebugBreak();
            }
          }
          if (*(char *)((int)pvVar2 + 0x2a2) == '\0') {
            (**(code **)(**(int **)((int)pvVar2 + 0x18) + 0xc))();
            if (*(int **)((int)pvVar2 + 0x28) != (int *)0x0) {
              (**(code **)(**(int **)((int)pvVar2 + 0x28) + 0xc))();
            }
            *(undefined1 *)((int)pvVar2 + 0x2a2) = 1;
          }
          if (*(char *)((int)pvVar2 + 0x2a3) != '\0') {
            if (*(int *)((int)pvVar2 + 0x498) != 0) {
              (**(code **)(**(int **)(*(int *)(*(int *)((int)pvVar2 + 0x18) + 4) + 0x50) + 0x20))
                        (*(undefined4 *)((int)pvVar2 + 0x298),*(undefined4 *)((int)pvVar2 + 0x29c),1
                        );
            }
            *(undefined1 *)((int)pvVar2 + 0x2a3) = 0;
          }
        }
      }
      param_1 = param_1 - local_c;
    } while( true );
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x18))(1,param_7,param_3,param_4,param_5,param_6,0);
  if ((*(char *)((int)this + 0xd8d) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar1 = false;
    if (*(char *)((int)this + 0x2a1) == '\0') goto LAB_1001a562;
  }
  else {
    bVar1 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c));
  if ((bVar1) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_1001a562:
  if (*(char *)((int)this + 0x2a2) == '\0') {
    (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
    if (*(int **)((int)this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0xc))();
    }
    *(undefined1 *)((int)this + 0x2a2) = 1;
  }
  if (*(char *)((int)this + 0x2a3) != '\0') {
    if (*(int *)((int)this + 0x498) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50) + 0x20))
                (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c),1);
    }
    *(undefined1 *)((int)this + 0x2a3) = 0;
  }
  return;
}

