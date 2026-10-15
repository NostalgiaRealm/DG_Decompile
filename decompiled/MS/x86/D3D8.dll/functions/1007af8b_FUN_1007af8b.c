/*
 * FUN_1007af8b at 1007af8b
 * int __thiscall FUN_1007af8b(void * this, uint * param_1)
 * Address ranges: 1007af8b-1007b05f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1007af8b(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CHAR local_210 [512];
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  
  local_10 = *(undefined4 *)((int)this + 0xb10);
  local_c = *(undefined1 *)((int)this + 0xb14);
  local_b = *(undefined1 *)((int)this + 0xb16);
  local_a = *(undefined1 *)((int)this + 0xb15);
  local_9 = *(undefined1 *)(*(int *)((int)this + 0xc) + 0x959);
  local_8 = *(undefined1 *)((int)this + 0xb18);
  local_7 = 0;
  iVar2 = FUN_10003b00(this,*param_1,this,(int)param_1,&local_10);
  if (*(HWND *)((int)this + 0xb08) != (HWND)0x0) {
    iVar3 = GetClassNameA(*(HWND *)((int)this + 0xb08),local_210,0x1ff);
    local_210[iVar3] = '\0';
    if (0 < iVar3) {
      pcVar4 = FUN_100ad616(local_210,"Indiana");
      if (pcVar4 != (char *)0x0) {
        puVar1 = (uint *)(*(int *)((int)this + 0x58f4) + 0x3c);
        *puVar1 = *puVar1 | 0x100;
      }
    }
  }
  if (-1 < iVar2) {
    FUN_100133bf((void *)((int)this + 0x58d4),DAT_100ba2b4,
                 -(uint)(this != (void *)0x0) & (int)this + 0x58d0U);
  }
  return iVar2;
}

