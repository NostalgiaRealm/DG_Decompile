/*
 * FUN_18004315c at 18004315c
 * char __fastcall FUN_18004315c(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18004315c-1800431eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18004315c(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  uint local_res18 [4];
  
  cVar5 = '\x01';
  if (param_3 == 0xffffffff) {
    uVar1 = *(uint *)(param_2 + 0x18);
    uVar4 = 0;
    local_res18[0] = 0xffffffff;
    if (uVar1 != 0) {
      do {
        if (uVar4 < *(uint *)(param_2 + 0x18)) {
          param_1 = (ulonglong)uVar4 * 0x30;
          plVar2 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10 + param_1);
        }
        else {
          plVar2 = (longlong *)&DAT_00000008;
        }
        cVar5 = FUN_1800430d4(param_1,plVar2,'\x01');
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  else {
    lVar3 = param_2 + 8;
    local_res18[0] = param_3;
    plVar2 = (longlong *)FUN_180043cc4(lVar3,local_res18);
    if (plVar2 != (longlong *)0x0) {
      cVar5 = FUN_1800430d4(lVar3,plVar2,cVar5);
    }
  }
  return cVar5;
}

