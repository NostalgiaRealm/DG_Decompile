/*
 * FUN_1004037c at 1004037c
 * undefined4 __thiscall FUN_1004037c(void * this, int * param_1, int * param_2)
 * Address ranges: 1004037c-10040523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004037c(void *this,int *param_1,int *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = 0x80070057;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    bVar2 = true;
    if ((*param_1 != 0xac) && (*param_1 != 0xcc)) {
      bVar2 = *param_1 == 0xfc;
    }
    if ((((*param_2 == 0xac) || (*param_2 == 0xcc)) || (*param_2 == 0xfc)) && (bVar2)) {
      if (*param_1 == 0xac) {
        if (*(char *)((int)*(void **)((int)this + 0xa58) + 0x20) == '\0') {
          FUN_1003cba7(*(void **)((int)this + 0xa58),param_1);
        }
        else {
          FUN_1005c9cc(param_1 + 1,0,0xa8);
          *param_1 = 0xac;
        }
      }
      else if (*param_1 == 0xcc) {
        if (*(char *)((int)*(void **)((int)this + 0xa58) + 0x20) == '\0') {
          FUN_1003cc8f(*(void **)((int)this + 0xa58),param_1);
        }
        else {
          FUN_1005c9cc(param_1 + 1,0,200);
          *param_1 = 0xcc;
        }
      }
      else if (*param_1 == 0xfc) {
        if (*(char *)((int)*(void **)((int)this + 0xa58) + 0x20) == '\0') {
          FUN_1003cd2c(*(void **)((int)this + 0xa58),param_1);
        }
        else {
          FUN_1005c9cc(param_1 + 1,0,0xf8);
          *param_1 = 0xfc;
        }
      }
      if (*param_2 == 0xac) {
        if (*(char *)((int)*(void **)((int)this + 0xa58) + 0x20) == '\0') {
          FUN_1005c9cc(param_2 + 1,0,0xa8);
          *param_2 = 0xac;
        }
        else {
          FUN_1003cba7(*(void **)((int)this + 0xa58),param_2);
        }
      }
      else if (*param_2 == 0xcc) {
        if (*(char *)((int)*(void **)((int)this + 0xa58) + 0x20) == '\0') {
          FUN_1005c9cc(param_2 + 1,0,200);
          *param_2 = 0xcc;
        }
        else {
          FUN_1003cc8f(*(void **)((int)this + 0xa58),param_2);
        }
      }
      else if (*param_2 == 0xfc) {
        if (*(char *)((int)*(void **)((int)this + 0xa58) + 0x20) == '\0') {
          FUN_1005c9cc(param_2 + 1,0,0xf8);
          *param_2 = 0xfc;
        }
        else {
          FUN_1003cd2c(*(void **)((int)this + 0xa58),param_2);
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

