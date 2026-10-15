/*
 * FUN_1000c628 at 1000c628
 * undefined __fastcall FUN_1000c628(void * param_1)
 * Address ranges: 1000c628-1000c725
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c628(void *param_1)

{
  int iVar1;
  uint uVar2;
  void *this;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c [2];
  
  local_c[0] = 0;
  local_10 = 0;
  FUN_10011b76(param_1,local_c,&local_10);
  this = (void *)(-(uint)(local_c[0] != 0xffffffff) & local_c[0] * 0x104 + 0x38f4 + (int)param_1);
  uVar2 = -(uint)(local_10 != 0xffffffff) & local_10 * 0x104 + 0x38f4 + (int)param_1;
  if (this == (void *)0x0) {
LAB_1000c6cf:
    local_18 = 0;
  }
  else {
    if ((uVar2 != 0) &&
       (((*(char *)(uVar2 + 0x48) != '\0' && (*(int *)((int)this + 0x28) != *(int *)(uVar2 + 0x28)))
        || (*(int *)((int)this + 0x2c) != *(int *)(uVar2 + 0x2c))))) {
      if (*(int *)((int)this + 0xf4) == 0) {
        FUN_10021060(this,*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c),
                     *(undefined4 *)((int)this + 0x30),*(byte *)(*(int *)((int)param_1 + 4) + 0x54),
                     (int *)((int)this + 0xf4),(int)this + 0xf8);
      }
      uVar2 = 0;
    }
    if (*(char *)((int)this + 0x48) != '\0') goto LAB_1000c6cf;
    local_18 = *(undefined4 *)((int)this + 0xb4);
  }
  if (uVar2 == 0) {
    local_14 = 0;
    if (this != (void *)0x0) {
      iVar1 = *(int *)((int)this + 0xf8);
      goto LAB_1000c707;
    }
  }
  else {
    if (*(char *)(uVar2 + 0x48) == '\0') {
      local_14 = 0;
    }
    else {
      local_14 = *(undefined4 *)(uVar2 + 0xb0);
    }
    if (*(char *)(uVar2 + 0x48) != '\0') {
      iVar1 = *(int *)(uVar2 + 0xf8);
      goto LAB_1000c707;
    }
  }
  iVar1 = 0;
LAB_1000c707:
  FUN_1004790b(*(void **)((int)param_1 + 0x3680),*(int *)((int)param_1 + 0x3684),2,(int)&local_18,
               iVar1);
  return;
}

