/*
 * FUN_180093ca4 at 180093ca4
 * undefined8 __fastcall FUN_180093ca4(longlong param_1, undefined4 param_2, longlong param_3, uint param_4, int param_5)
 * Address ranges: 180093ca4-180093d71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180093ca4(longlong param_1,undefined4 param_2,longlong param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  LPVOID local_48;
  int local_40;
  int local_3c;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(lVar1 + 0x1cf10);
  lVar5 = (ulonglong)*(uint *)(lVar1 + 0x28) * 0x18c0;
  if (*(char *)(param_1 + -3) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x6b8 + lVar5);
    uVar4 = (**(code **)(*plVar3 + 0x180))(plVar3,*(undefined8 *)(param_1 + 0x20),param_2,0);
  }
  else {
    plVar3 = FUN_1800ac86c(param_1 + -0x20,(longlong *)&local_48,lVar1,(byte)param_2,param_3,param_4
                           ,param_5);
    if (local_48 == (LPVOID)0x0) {
      return (ulonglong)plVar3 & 0xffffffffffffff00;
    }
    plVar3 = *(longlong **)(lVar2 + 0x6b8 + lVar5);
    (**(code **)(*plVar3 + 0x180))
              (plVar3,*(undefined8 *)(param_1 + 0x20),param_2,0,local_48,local_40 << 2,
               local_3c * local_40 * 4);
    uVar4 = FUN_1800fbcf0(local_48);
  }
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}

