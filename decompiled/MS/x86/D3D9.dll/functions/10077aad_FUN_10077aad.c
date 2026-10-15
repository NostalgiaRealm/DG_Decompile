/*
 * FUN_10077aad at 10077aad
 * undefined __thiscall FUN_10077aad(void * this, int param_1)
 * Address ranges: 10077aad-10077b4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10077aad(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_20 [7];
  
  piVar1 = (int *)((int)this + 0x1c);
  if (*piVar1 != 0) {
    return;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x20))(*(int **)((int)this + 0x14),local_20);
  if ((local_20[0] != 0xb) && (local_20[0] != 0x18)) {
    if (local_20[0] == 0x1c) {
      local_20[0] = 0x1d;
    }
    else if (local_20[0] == 0x47) {
      local_20[0] = 0x48;
    }
    else if (local_20[0] == 0x4a) {
      local_20[0] = 0x4b;
    }
    else {
      if (local_20[0] != 0x4d) {
        local_20[0] = 0;
        goto LAB_10077b37;
      }
      local_20[0] = 0x4e;
    }
  }
  if (param_1 == 0) {
    param_1 = *(int *)((int)this + 0xc);
  }
  (**(code **)(*(int *)**(undefined4 **)((int)this + 8) + 0x1c))
            ((int *)**(undefined4 **)((int)this + 8),param_1,local_20,piVar1);
LAB_10077b37:
  if (*piVar1 == 0) {
    piVar2 = *(int **)((int)this + 0x14);
    *piVar1 = (int)piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return;
}

