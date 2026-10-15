/*
 * FUN_1002c26b at 1002c26b
 * undefined4 * __thiscall FUN_1002c26b(void * this, undefined4 * param_1, LONG * param_2, int * param_3, LONG * param_4, int param_5, int param_6, undefined1 param_7, undefined1 param_8)
 * Address ranges: 1002c26b-1002c385
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1002c26b(void *this,undefined4 *param_1,LONG *param_2,int *param_3,LONG *param_4,int param_5,
            int param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  BOOL BVar4;
  tagRECT local_18;
  undefined4 *local_8;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  ((LPRECT)((int)this + 0x10))->left = *param_2;
  *(LONG *)((int)this + 0x14) = param_2[1];
  *(LONG *)((int)this + 0x18) = param_2[2];
  *(LONG *)((int)this + 0x1c) = param_2[3];
  ((LPRECT)((int)this + 0x20))->left = *param_4;
  *(LONG *)((int)this + 0x24) = param_4[1];
  *(LONG *)((int)this + 0x28) = param_4[2];
  *(LONG *)((int)this + 0x2c) = param_4[3];
  *(undefined1 *)((int)this + 0x40) = param_7;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x41) = param_8;
  *(undefined1 *)((int)this + 0x42) = 0;
  if (param_3 != (int *)0x0) {
    _param_7 = 0;
    local_8 = this;
    OffsetRect((LPRECT)((int)this + 0x10),-param_5,-param_6);
    OffsetRect((LPRECT)((int)this + 0x20),-param_5,-param_6);
    this = local_8;
    local_8[0xe] = param_5;
    puVar1 = local_8 + 4;
    local_8[0xf] = param_6;
    iVar2 = (**(code **)(*param_3 + 0xc))(param_3,puVar1,local_8[0xc],&param_7);
    if ((iVar2 == 0) && (_param_7 != 0)) {
      puVar3 = (undefined4 *)FUN_10060bfe(_param_7);
      *(undefined4 **)((int)this + 0x30) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0x20;
        *(undefined4 *)(*(int *)((int)this + 0x30) + 4) = 1;
        *(SIZE_T *)(*(int *)((int)this + 0x30) + 8) = _param_7 - 0x20 >> 4;
        iVar2 = (**(code **)(*param_3 + 0xc))
                          (param_3,puVar1,*(undefined4 *)((int)this + 0x30),&param_7);
        if (iVar2 == 0) {
          BVar4 = IntersectRect(&local_18,(RECT *)((int)this + 0x20),
                                (RECT *)((int)*(LPVOID *)((int)this + 0x30) + 0x10));
          *(char *)((int)this + 0x42) = '\x01' - (BVar4 != 0);
        }
        else {
          thunk_FUN_10060be1(*(LPVOID *)((int)this + 0x30));
          *(undefined4 *)((int)this + 0x30) = 0;
        }
      }
    }
  }
  return this;
}

