/*
 * FUN_100162ef at 100162ef
 * undefined __thiscall FUN_100162ef(void * this, uint param_1, RECT * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, RECT * param_7)
 * Address ranges: 100162ef-1001657d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100162ef(void *this,uint param_1,RECT *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,RECT *param_7)

{
  undefined4 *puVar1;
  bool bVar2;
  void *pvVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  tagRECT local_110 [16];
  void *local_10;
  int local_c;
  uint local_8;
  
  local_10 = this;
  (**(code **)**(undefined4 **)((int)this + 0x18))();
  puVar1 = *(undefined4 **)((int)this + 0x28);
  if (param_2 != (RECT *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)();
    }
    do {
      if (param_1 == 0) {
        return;
      }
      iVar6 = 0;
      local_8 = param_1;
      if (0x10 < param_1) {
        local_8 = 0x10;
      }
      uVar7 = local_8;
      local_c = iVar6;
      if (local_8 != 0) {
        do {
          BVar4 = IntersectRect(local_110 + iVar6,param_2,param_7);
          pvVar3 = local_10;
          iVar5 = iVar6 + 1;
          if (BVar4 == 0) {
            iVar5 = iVar6;
          }
          param_2 = param_2 + 1;
          uVar7 = uVar7 - 1;
          iVar6 = iVar5;
        } while (uVar7 != 0);
        if (iVar5 != 0) {
          local_c = iVar5;
          (**(code **)(**(int **)((int)local_10 + 0x14) + 0x18))
                    (iVar5,local_110,param_3,param_4,param_5,param_6,0);
          if ((*(char *)((int)pvVar3 + 0xac9) == '\0') &&
             (*(char *)(*(int *)((int)pvVar3 + 0xc) + 0x75e) == '\0')) {
            bVar2 = false;
            if (*(char *)((int)pvVar3 + 0xfd) != '\0') goto LAB_100163d7;
          }
          else {
            bVar2 = true;
LAB_100163d7:
            (**(code **)(**(int **)((int)pvVar3 + 0x14) + 0x14))();
            (**(code **)(**(int **)((int)pvVar3 + 0x18) + 0x14))
                      (*(undefined4 *)((int)pvVar3 + 0xf4),*(undefined4 *)((int)pvVar3 + 0xf8));
            if ((bVar2) &&
               ((**(code **)(**(int **)((int)pvVar3 + 0x18) + 0x14))
                          (*(undefined4 *)((int)pvVar3 + 0xf4),*(undefined4 *)((int)pvVar3 + 0xf8)),
               *(char *)(*(int *)((int)pvVar3 + 0xc) + 0x75f) != '\0')) {
              DebugBreak();
            }
          }
          if (*(char *)((int)pvVar3 + 0xfe) == '\0') {
            (**(code **)(**(int **)((int)pvVar3 + 0x18) + 0xc))();
            if (*(int **)((int)pvVar3 + 0x28) != (int *)0x0) {
              (**(code **)(**(int **)((int)pvVar3 + 0x28) + 0xc))();
            }
            *(undefined1 *)((int)pvVar3 + 0xfe) = 1;
          }
          if (*(char *)((int)pvVar3 + 0xff) != '\0') {
            if (*(int *)((int)pvVar3 + 0x2f4) != 0) {
              (**(code **)(**(int **)(*(int *)(*(int *)((int)pvVar3 + 0x18) + 4) + 0x50) + 0x20))
                        (*(undefined4 *)((int)pvVar3 + 0xf4),*(undefined4 *)((int)pvVar3 + 0xf8),1);
            }
            *(undefined1 *)((int)pvVar3 + 0xff) = 0;
          }
        }
      }
      param_1 = param_1 - local_8;
    } while( true );
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x18))(1,param_7,param_3,param_4,param_5,param_6,0);
  if ((*(char *)((int)this + 0xac9) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar2 = false;
    if (*(char *)((int)this + 0xfd) == '\0') goto LAB_10016522;
  }
  else {
    bVar2 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8));
  if ((bVar2) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_10016522:
  if (*(char *)((int)this + 0xfe) == '\0') {
    (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
    if (*(int **)((int)this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0xc))();
    }
    *(undefined1 *)((int)this + 0xfe) = 1;
  }
  if (*(char *)((int)this + 0xff) != '\0') {
    if (*(int *)((int)this + 0x2f4) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50) + 0x20))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8),1);
    }
    *(undefined1 *)((int)this + 0xff) = 0;
  }
  return;
}

