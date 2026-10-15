/*
 * FUN_100349c2 at 100349c2
 * undefined4 __thiscall FUN_100349c2(void * this, int * param_1)
 * Address ranges: 100349c2-10034a1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100349c2(void *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_80;
  int local_7c [30];
  
  uVar2 = 0x80070057;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x6c)) {
    FUN_10060d45(local_7c,0,0x78);
    local_80 = 0x7c;
    FUN_10026679(*(void **)this,&local_80);
    uVar2 = 0x80004005;
    cVar1 = FUN_10031887(&local_80,param_1);
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}

