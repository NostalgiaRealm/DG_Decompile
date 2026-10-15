/*
 * FUN_10056800 at 10056800
 * undefined FUN_10056800(void)
 * Address ranges: 10056800-100568d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056800(int param_1,int param_2,byte param_3)

{
  char *pcVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_10 [2];
  undefined1 local_8;
  undefined1 auStack_7 [7];
  
  uVar2 = *(uint *)(param_1 + 0xf8f8);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar7 = uVar5 + uVar6 >> 1;
      uVar8 = *(ulonglong *)(*(int *)(param_1 + 0xf8f4) + uVar7 * 0x18);
      uVar4 = uVar7;
      if (uVar8 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar8) break;
        uVar6 = uVar7 + 1;
        uVar7 = uVar6;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar6);
    if (((uVar7 != uVar2) &&
        (plVar3 = (longlong *)(*(int *)(param_1 + 0xf8f4) + uVar7 * 0x18),
        *plVar3 == (longlong)param_2)) &&
       (pcVar1 = (char *)((int)plVar3 + 0xc), pcVar1 != (char *)0x0)) {
      *pcVar1 = *pcVar1 + '\x01';
      *(undefined1 *)((int)plVar3 + 0x13) = 1;
      return;
    }
  }
  _local_8 = CONCAT71((uint7)param_3 << 0x28,1);
  _local_8 = CONCAT17(1,_local_8);
  local_10[0] = param_2;
  FUN_10060a28(param_1 + 0xf8f0,local_10,&local_8);
  return;
}

