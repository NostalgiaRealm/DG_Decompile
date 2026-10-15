/*
 * FUN_1007bf54 at 1007bf54
 * int __thiscall FUN_1007bf54(void * this, char param_1)
 * Address ranges: 1007bf54-1007bfea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1007bf54(void *this,char param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int local_20 [7];
  
  if (param_1 != '\0') {
    piVar1 = (int *)((int)this + 0x3c);
    if (*piVar1 == 0) {
      (**(code **)(**(int **)((int)this + 0x38) + 0x20))(*(int **)((int)this + 0x38),local_20);
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
        bVar3 = local_20[0] != 0x4d;
        local_20[0] = 0x4e;
        if (bVar3) {
          local_20[0] = 0;
        }
      }
      if (local_20[0] == 0) {
        piVar2 = *(int **)((int)this + 0x38);
        *piVar1 = (int)piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      else {
        piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x30) + 0x14) * 0x1510 + 0x510 +
                          *(int *)(*(int *)((int)this + 0x30) + 0x1cf00));
        (**(code **)(*piVar2 + 0x1c))(piVar2,*(undefined4 *)((int)this + 0x34),local_20,piVar1);
      }
    }
    if (*piVar1 != 0) {
      return *piVar1;
    }
  }
  return *(int *)((int)this + 0x38);
}

