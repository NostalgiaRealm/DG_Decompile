/*
 * FUN_1001870d at 1001870d
 * undefined __fastcall FUN_1001870d(void * param_1)
 * Address ranges: 1001870d-1001880a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001870d(void *param_1)

{
  int iVar1;
  uint uVar2;
  void *this;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c [2];
  
  local_c[0] = 0;
  local_10 = 0;
  FUN_1001c8e4(param_1,local_c,&local_10);
  this = (void *)(-(uint)(local_c[0] != -1) & local_c[0] * 0x104 + 0x33f4 + (int)param_1);
  uVar2 = -(uint)(local_10 != -1) & local_10 * 0x104 + 0x33f4 + (int)param_1;
  if (this == (void *)0x0) {
LAB_100187b4:
    local_18 = 0;
  }
  else {
    if ((uVar2 != 0) &&
       (((*(char *)(uVar2 + 0x48) != '\0' && (*(int *)((int)this + 0x28) != *(int *)(uVar2 + 0x28)))
        || (*(int *)((int)this + 0x2c) != *(int *)(uVar2 + 0x2c))))) {
      if (*(int *)((int)this + 0xf4) == 0) {
        FUN_1002d92c(this,*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c),
                     *(undefined4 *)((int)this + 0x30),*(byte *)(*(int *)((int)param_1 + 4) + 0x54),
                     (int *)((int)this + 0xf4),(int)this + 0xf8);
      }
      uVar2 = 0;
    }
    if (*(char *)((int)this + 0x48) != '\0') goto LAB_100187b4;
    local_18 = *(undefined4 *)((int)this + 0xb4);
  }
  if (uVar2 == 0) {
    local_14 = 0;
    if (this != (void *)0x0) {
      iVar1 = *(int *)((int)this + 0xf8);
      goto LAB_100187ec;
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
      goto LAB_100187ec;
    }
  }
  iVar1 = 0;
LAB_100187ec:
  FUN_10041daa(*(void **)((int)param_1 + 0x3180),*(int *)((int)param_1 + 0x3184),2,(int)&local_18,
               iVar1);
  return;
}

