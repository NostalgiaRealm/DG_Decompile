/*
 * FUN_1002feda at 1002feda
 * char __thiscall FUN_1002feda(void * this, undefined4 * param_1, undefined4 param_2)
 * Address ranges: 1002feda-1002ffd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1002feda(void *this,undefined4 *param_1,undefined4 param_2)

{
  int *this_00;
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  this_00 = (int *)((int)this + 0x5c);
  *(undefined4 *)((int)this + 0x68) = param_2;
  if (*this_00 != 0) {
    FUN_10030f20(*this_00);
  }
  local_14 = 0xffffffff;
  *this_00 = 0;
  cVar1 = '\0';
  cVar6 = '\0';
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  uVar3 = FUN_10030d51(this_00,&local_14);
  cVar2 = cVar1;
  if ((char)uVar3 != '\0') {
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 **)((int)this + 0x20) = param_1;
    iVar4 = (**(code **)*param_1)(0,0,0);
    cVar2 = cVar6;
    if (iVar4 == 0) {
      iVar4 = FUN_100556a3(0x1000);
      *(int *)((int)this + 0x1c) = iVar4;
      if (iVar4 != 0) {
        iVar4 = FUN_100556a3(0x2000);
        *(int *)((int)this + 0x34) = iVar4;
        cVar2 = cVar1;
        if (iVar4 != 0) {
          iVar4 = FUN_100556a3(0x80);
          *(int *)((int)this + 0x44) = iVar4;
          if (iVar4 != 0) {
            *(undefined4 *)((int)this + 0x48) = 0x80;
            *(undefined4 *)((int)this + 0x4c) = 0;
            *(undefined4 *)((int)this + 0x30) = 1;
            *(undefined1 *)((int)this + 0x2c) = 0;
            uVar5 = FUN_1002ffd7((int)this);
            cVar2 = cVar6;
            if ((char)uVar5 != '\0') {
              cVar2 = '\x01';
              do {
                if (*(char *)((int)this + 0x2c) != '\0') break;
                uVar5 = FUN_10030613(this);
                cVar2 = (char)uVar5;
              } while (cVar2 != '\0');
            }
          }
          thunk_FUN_10055686(*(LPVOID *)((int)this + 0x34));
          *(undefined4 *)((int)this + 0x34) = 0;
        }
        thunk_FUN_10055686(*(LPVOID *)((int)this + 0x1c));
        *(undefined4 *)((int)this + 0x1c) = 0;
      }
    }
  }
  return cVar2;
}

