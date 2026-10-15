/*
 * FUN_10028808 at 10028808
 * undefined4 __thiscall FUN_10028808(void * this, int * param_1, uint param_2, int param_3, undefined4 * param_4, int param_5, undefined4 * param_6)
 * Address ranges: 10028808-100288df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10028808(void *this,int *param_1,uint param_2,int param_3,undefined4 *param_4,int param_5,
            undefined4 *param_6)

{
  undefined4 *puVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar4 = 0x80070057;
  if ((param_4 != (undefined4 *)0x0) &&
     ((param_3 != 0 || (((char)param_6 != '\0' && ((param_2 & 8) == 0)))))) {
    *param_4 = 0;
    if (((param_2 & 0xfffff800) == 0 && param_5 == 0) &&
       ((uVar4 = 0x80004001, (param_2 & 0x30) == 0 &&
        (uVar4 = 0x887600d4, *(char *)((int)this + 0x108) != (char)param_5)))) {
      uVar4 = 0x8007000e;
      param_6 = FUN_10022647(param_1,this,param_2,param_3);
      if (param_6 != (undefined4 *)0x0) {
        uVar3 = FUN_1000138a((void *)((int)this + 0x134),&param_6);
        puVar1 = param_6;
        if ((char)uVar3 == '\0') {
          if (param_6 != (undefined4 *)0x0) {
            FUN_1002957a(param_6);
            FUN_10060be1(puVar1);
          }
        }
        else {
          uVar4 = 0;
          *param_4 = param_6;
        }
      }
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

