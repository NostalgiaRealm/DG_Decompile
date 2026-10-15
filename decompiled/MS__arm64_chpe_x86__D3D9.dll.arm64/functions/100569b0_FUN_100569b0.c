/*
 * FUN_100569b0 at 100569b0
 * undefined FUN_100569b0(void)
 * Address ranges: 100569b0-10056a8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100569b0(int param_1,int param_2,byte param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_10 [2];
  int7 local_8;
  undefined1 uStack_1;
  
  uVar1 = *(uint *)(param_1 + 0xf8f8);
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar4 = uVar1;
    do {
      uVar6 = uVar4 + uVar5 >> 1;
      uVar7 = *(ulonglong *)(*(int *)(param_1 + 0xf8f4) + uVar6 * 0x18);
      uVar3 = uVar6;
      if (uVar7 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar7) break;
        uVar5 = uVar6 + 1;
        uVar6 = uVar5;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar5);
    if (((uVar6 != uVar1) &&
        (plVar2 = (longlong *)(*(int *)(param_1 + 0xf8f4) + uVar6 * 0x18),
        *plVar2 == (longlong)param_2)) && (plVar2 != (longlong *)0xfffffff4)) {
      *(char *)((int)plVar2 + 0xd) = *(char *)((int)plVar2 + 0xd) + '\x01';
      *(undefined1 *)((int)plVar2 + 0x13) = 1;
      return;
    }
  }
  local_8 = (uint7)param_3 << 0x30;
  _local_8 = CONCAT17(1,CONCAT52((int5)((uint7)local_8 >> 0x10),0x100));
  local_10[0] = param_2;
  FUN_10060a28(param_1 + 0xf8f0,local_10,&local_8);
  return;
}

